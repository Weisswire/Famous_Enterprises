#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        sum += 2 + i * 3;
    }
    cout << sum << endl;
    return 0;
}
