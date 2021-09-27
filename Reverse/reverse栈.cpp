#include <iostream>
#include <stack>
//#include <algorithm>
using namespace std;
void reverse(string &s)
{
    stack<char> st;
    for(int i = 0;i < s.length();i++)
    {
        st.push(s[i]);
    }
    for (int j = 0;j < s.length();j++)
    {
        s[j] = st.top();
        st.pop();
    }

}
int main()
{
    string str;
    getline(cin,str);
    //reverse(str.begin(),str.end());
    reverse(str);
    cout << str << endl;
    return 0;
}
