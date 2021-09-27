#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    getline(cin,x);
    int count = 0;
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] >= 'A' && x[i] <= 'Z')
            count ++;
    }
    cout << count << endl;
    return 0;
}
