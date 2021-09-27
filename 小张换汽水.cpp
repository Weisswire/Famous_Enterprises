#include <iostream>
using namespace std;

int ChangeBottle(int x)
{
    int bottle = 0;
    while(x/3 > 1)
    {
         bottle += x/3;
         x = x/3 + x%3;
    }
    if (x > 3)
    {
        bottle += 2;
    }
    else
    {
        bottle ++;
    }
    return bottle;
}
int main()
{
    int x = 0;
    while(cin >> x)
    {
        if(x)
            cout<<ChangeBottle(x)<<endl;
    }
    return 0;
}
