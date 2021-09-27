#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int amount = 0,variable = 0,flag = 0;
    //vector <int> vec;
    cin >> amount;
    int vec[amount];
    for(int i = 0;i < amount;i++)
    {
        cin >> variable;
        //vec.push_back(variable);
        vec[i] = variable;
    }
    sort(vec,vec+amount);
    //sort(vec.begin(),vec.end());
    if(amount == 1)
    {
        cout << vec[0] << endl;
    }
    else
    {
        cout << vec[0] << endl;
        for(int k = 1;k < amount;k++)
        {
            if(vec[k] != vec[k-1])
                cout << vec[k] << endl;
        }
    }
    return 0;
}
