#include <iostream>
#include <string>
using namespace std;

int IsPalindrome(string a,int start,int ed)
{
    for(int i = start,j = ed; i <= j; i ++,j--)
    {
        if(a[i] != a[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string str;
    cin >> str;
    int len = 1;
    for(int i = 0; i < str.size(); i++)
    {
        for(int j = 1; i + j < str.size(); j++)
        {
            if(IsPalindrome(str,i,i+j))
            {
                if(j + 1 > len)
                    len = j + 1;
            }
        }
    }
    cout << len << endl;
    return 0;
}
