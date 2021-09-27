#include <iostream>
#include <vector>
using namespace std;

void Nik(int x)
{
    for(int i = 1; i < 10000; i += 2)
    {
        int j = i,sum = 0;
        vector <int> result;
        while(sum < x * x * x)
        {
            sum += j;
            result.push_back(j);
            j += 2;
        }
        if(sum == x * x * x && result.size() == x)
        {
            for(int k = 0; k < result.size() - 1; k++)
            {
                cout << result[k] <<"+";
            }
            cout << result[result.size() - 1] << endl;
        }
    }
}
int main()
{
    int x;
    cin >> x;
    Nik(x);
    return 0;
}
