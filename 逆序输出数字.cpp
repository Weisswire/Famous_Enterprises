#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

inline string toString(int x)
{
    ostringstream os;
    os << x;
    return os.str();
}
int main()
{
    int x;
    cin >> x;
    string a = toString(x);
    reverse(a.begin(),a.end());
    cout << a;
    return 0;
}
