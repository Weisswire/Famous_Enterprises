#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n, 0));
    int mid = 0,sum = 0;
    int flag = 1;
    a[0][0] = 1;
    a[1][0] = 1;
    a[1][1] = 1;
    a[1][2] = 1;
    for(int i = 2; i < n;i++)
    {
        for (int j = 0;j < i+1;j++)
        {
            if (j == 0)
                sum = 1;
            else if(j == 1)
                sum = a[i-1][0] +a[i-1][1];
            else
                sum = a[i-1][j-2] + a[i-1][j-1] + a[i-1][j];
            a[i][j] = sum;
            sum = 0;
        }
    }
    for(int m = 0;m < n+1 ;m++)
    {
        if (a[n-1][m] != 0 && a[n-1][m] % 2 == 0)
        {
            cout << m+1 <<endl;
            flag = 0;
            break;
        }
    }
    if(flag)
        cout << -1 << endl;
    return 0;
}
