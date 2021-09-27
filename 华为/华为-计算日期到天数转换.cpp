#include <iostream>
using namespace std;

int Sub(int y, int m, int d)
{
    int leapyear = 0,mm = 0 ,day = 0;
    if(y % 400 == 0 ||(y % 4 == 0 && y % 100 != 0))
        leapyear = 1;
    for (int j = 1; j < m ; j++)
    {
        if(j == 1||j == 3||j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
            day += 31;
        else if(j == 2)
        {
            if(leapyear)
                day += 29;
            else
                day += 28;
        }
        else
            day += 30;
    }
    day += d;
    return day;
}
int main()
{
    int y,m,d;
    cin >> y >> m >> d;
    cout << Sub(y,m,d) << endl;
    return 0;
}
