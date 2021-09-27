#include <iostream>
#include <math.h>
using namespace std;

void Perfect(int x)
{
    int sum = 1,Count = 0;
    for(int i = 2;i <= x;i++)
    {
        for(int j = 2;j < sqrt(i);j++)
        {
            if(i % j == 0)
            {
                  //如果j^2 = i，说明两个约数相同，只加一个
                if(i / j == j)
                {
                    sum += j;
                }
                else
                {
                    //否则，两个不同的约数都要相加
                    sum += j + (i / j);
                }
            }
        }
        if(sum == i)
        {
            Count ++;
        }
        sum = 0;
    }
    cout << Count << endl;
}
int main()
{
    int x;
    cin >> x;
    Perfect(x);
    return 0;
}
