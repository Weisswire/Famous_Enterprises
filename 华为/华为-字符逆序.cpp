#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string x;
    getline(cin,x);
    reverse(x.begin(), x.end());
    cout << x << endl;
    return 0;
}
