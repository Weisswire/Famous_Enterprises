#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    reverse(a.begin(),a.end());
    cout << a;
    return 0;
}
