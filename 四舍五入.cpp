#include <iostream>
using namespace std;

int main()
{
    float a;
    int low,high;
    cin >> a;
    low = (int)a;
    high = (int)a+1;
    float c1 = a - low;
    float c2 = high - a;
    if(c1 < c2)
        cout << low;
    else
        cout << high;
    return 0;
}
