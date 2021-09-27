#include <iostream>
using namespace std;

void Count(int x)
{
    int count = 0;
    while(x/2)
    {
        if(x % 2 == 1)
            count++;
        x = x/2;
    }
    if (x == 1)
        count ++;
    cout << count << endl;
}
int main()
{
    int x;
    cin >> x;
    Count(x);
    return 0;
}
