//中缀转后缀
#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int ispriority(char a)//确定优先级
{
    int flag;
    if (a == '+' || a == '-')
        flag = 1;
    if (a == '*' || a == '/')
        flag = 2;
    return flag;
}
int main()
{
    string str;
    while (cin >> str)
    {
        for (int i = 0; i < str.size(); i++)//将大括号和中括号变为小括号，方便使用
        {
            if (str[i] == '[' || str[i] == '{')
                str[i] = '(';
            if (str[i] == ']' || str[i] == '}')
                str[i] = ')';
            if (str[i] == '-' && (i == 0 || str[i - 1] == '('))//区分负号和减号，负数在负号前面加0
                str.insert(i, "0");
        }
        vector<string> v;
        stack<char> s;
        for (int i = 0; i < str.size(); i++)
        {
            string str1;
            if (str[i] >= '0'&&str[i] <= '9')//数字输出
            {
                str1 += str[i];
                while (i + 1 < str.size() && str[i + 1] >= '0'&&str[i + 1] <= '9')//大于等于10的数的输出
                {
                    str1 += str[i + 1];
                    i++;
                }
                v.push_back(str1);
            }
            else
            {
                if (s.empty())//栈为空则进栈
                    s.push(str[i]);
                else
                {
                    if (str[i] == '(')//左括号进栈
                    {
                        s.push(str[i]);
                    }
                    else if (str[i] == ')')//右括号则括号内的元素出栈，直到左括号为止
                    {
                        while (s.top() != '(')
                        {
                            string str2;
                            str2 += s.top();
                            v.push_back(str2);
                            s.pop();
                        }
                        s.pop();//左括号也出栈
                    }
                    else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
                    {
                        while (s.size() != 0 && s.top() != '(' && ispriority(str[i]) <= ispriority(s.top()))
                        {
                            string str3;//优先级不高于栈顶则栈内元素出栈直到遇见高优先级运算符号
                            str3 += s.top();
                            v.push_back(str3);
                            s.pop();
                        }
                        s.push(str[i]);//高优先级运算符出栈完成，低优先级运算符进栈
                    }
                }
            }
        }
        while (!s.empty())//将栈中运算符依次出栈
        {
            string str4;
            str4 += s.top();
            v.push_back(str4);
            s.pop();
        }
        stack<int> s1;//数字栈
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i][0] >= '0'&&v[i][0] <= '9')
                s1.push(stoi(v[i]));//数字串转为整型数字，并将数字进数字栈
            else//遇见运算符，数字栈抛出两个元素，与运算符进行运算，结果进栈。
            {    //其中第一个出栈元素位于运算符右侧，第二个出栈元素在运算符左侧。
                int m, n;
                m = s1.top();
                s1.pop();
                n = s1.top();
                s1.pop();
                if (v[i] == "+")
                    s1.push(m + n);
                if (v[i] == "-")
                    s1.push(n - m);
                if (v[i] == "*")
                    s1.push(m*n);
                if (v[i] == "/")
                    s1.push(n / m);
            }
        }
        cout << s1.top() << endl;//最后数字栈只剩一个元素，就是运算结果。
    }
    return 0;
}
