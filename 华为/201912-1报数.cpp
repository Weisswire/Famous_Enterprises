#include <stdio.h>
#include <iostream>
using namespace std;
int distinguish(int number)
{
    int a,flag = 0;
    if(number % 7 == 0)
        flag = 1;
    else
    {
        while(number > 1)
        {
            a = number % 10;
            if (a == 7)
            {
                flag = 1;
                break;
            }
            number = number / 10;
        }
    }
    return flag;
}
int main(void)
{
    int a[4] = {0},count,b,i,n;
    cin >> n;
    for ( i = 1; count < n; i++)
    {
        if (distinguish(i) == 0)
        {
            count++;
        }
        else
        {
            b = i % 4;
            a[b]++;
        }
    }
    cout << a[1] << "\n" << a[2] << "\n" << a[3] << "\n" << a[0];
    return 0;
}
