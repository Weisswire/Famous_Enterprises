#include <iostream>
using namespace std;

int main()
{
    for(int x = 0;x < 100/5; x++)
    {
        double y = (100 - 7*x) / 4.0;
        double z = 100 - x -y;
        if(y == (int)y && y >= 0 && z >= 0)
            cout << x <<" " << y << " " << z << endl;
    }
    return 0;
}
