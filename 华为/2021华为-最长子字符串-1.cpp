#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int Count = 0,length = 0,first = 0,maxlength = 0;
    for(int i = 1;i < a.size();i++)
    {
        for(int j = 0;j < i; j++ )
        {
            if(a[j] == a[i])
                Count++;
        }
        if(Count > 2 )
        {
            length = i - first +1;
            if(length > maxlength)
                maxlength = length;
            Count = 0;
            first = i + 1;
            length = 0;
        }
        else
            length ++;
    }
    if(length > maxlength)
        maxlength = length;
    cout << maxlength <<endl;
    return 0;
}
