#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str,row;
    getline(cin,str);
    bool flag = false;
    vector <string> vec;
    for(int i = 0; i < str.length(); i++)
    {
        if(flag)
        {
            if(str[i] != '\"')
                row += str[i];
            else
                flag = false;
        }
        else
        {
            if(str[i] == ' ')
            {
                vec.push_back(row);
                row = "";
            }
            else if (str[i] == '\"')
                flag = true;
            else
                row += str[i];
        }
    }
    vec.push_back(row);
    cout << vec.size() << endl;
    for(int j = 0; j < vec.size(); j++)
    {
        cout << vec[j] << endl;
    }
    return 0;
}
