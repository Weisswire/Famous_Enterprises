#include <iostream>
using namespace std;

int rabbits(int month)
{
    int rabbit1 = 1;
    int rabbit2 = 0;
    int rabbit3 = 0;
    for(int i = 1;i < month; i++)
    {
        rabbit3 += rabbit2;
        rabbit2 = rabbit1;
        rabbit1 = rabbit3;
    }
    return rabbit1 + rabbit2 + rabbit3;
}
int main()
{
    int x;
    cin >> x;
    cout << rabbits(x) << endl;
    return 0;
}
