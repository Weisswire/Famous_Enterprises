#include <iostream>
#include <string>
//#include <cstdio>
using namespace std;
int fun(string a,string b,int c)
{
    int flag1 = 0,flag2=0,flagmin=0;
    int same = 0;
    int Count = c;
        for(int i = 0;i < a.length();i++)
        {
            for(int j = 0;j < b.length();j++)
            {
                 if(a[i] == b [j])
                 {
                     for(int k = 1;k < a.length()-j;k++)
                     {
                         if(a[i+k] != b[j+k])
                         {
                             Count --;
                         }
                         else
                         {
                             same ++;
                         }
                     }
                    // cout << same <<endl;
                    if(Count >= 0)
                    {
                        flag1 = a.length()-same;
                        Count = c;
                        same = 0;
                    }
                   else
                    {
                        Count = c;
                        same = 0;
                    }
                 }
                 else
                 {
                     break;
                 }
            }
        }
    for(int l = a.length()-1;l >= 0;l--)
        {
            for(int m = b.length()-1;m >= 0;m--)
            {
                 if(a[l] == b [m])
                 {
                     for(int n = 1;n <= l ;n++)
                     {
                         if(a[l-n] != b[m-n])
                         {
                             Count --;
                         }
                         else
                         {
                             same ++;
                         }
                     }
                    if(Count >= 0)
                    {
                        flag2 = a.length()-same;
                        Count = c;
                        same = 0;
                    }
                   else
                    {
                        Count = c;
                        same = 0;
                    }
                 }
                 else
                 {
                     break;
                 }
            }
        }
    if(flag1>flag2)
        flagmin = flag2;
    else
        flagmin = flag1;
    return flagmin;
}
int main()
{
    string a,b;
    int c;
    while(cin >> a >> b >> c)
    {
        cout << fun(a,b,c);
    }
    return 0;
}
