#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,m,grade;
    int a,b,maxx;
    char c;
    while(cin >> n >> m)
    {
    int *stID = new int [n+1];
    memset(stID,0,sizeof(int)*(n+1));
    int *stGr = new int [n+1];
    memset(stGr,0,sizeof(int)*(n+1));
    for(int i = 1;i < n+1; i++)
    {
        stID[i] = i;
        cin >> grade;
        stGr[i] = grade;
    }
    for (int k = 0;k < m;k++)
    {
        cin >> c >> a >> b;
        if (c == 'Q')
        {
            if(a > b)
            {
                int temp = a;
                a = b;
                b = temp;
            }
            maxx = stGr[a];
            for(int j = a+1;j < b+1 ;j++)
            {
                 if (stGr[j] >= maxx)
                    maxx = stGr[j];
            }
            cout << maxx << endl;
        }
        else if (c == 'U')
        {
            stGr[a] = b;
        }
    }
    delete stID,stGr;
    }
    return 0;
}
