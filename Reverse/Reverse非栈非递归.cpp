#include <iostream>
#include <string>
using namespace std;
void reverse (string &s)
{
    int i;
    for(i = s.length()-1;i>=0;i--)
    {
        cout << s[i];
    }
}

int main()
{
    string str;
    getline (cin,str);
    reverse(str);
    return 0;
}
