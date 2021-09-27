#include <iostream>
using namespace std;

int func(int m,int n)
{
    if(m == 0 || n == 0)
        return 1;
    else
        return func(m - 1,n) + func(m,n - 1);
}
int main()
{
    int x,y;
    cin >> x >> y;
    cout << func(x,y) << endl;
    return 0;
}
