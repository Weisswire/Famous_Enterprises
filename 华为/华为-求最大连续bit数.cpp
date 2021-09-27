#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int maxlength = 0,length = 0;
    while(num / 2)
    {
        if(num % 2 == 1)
        {
            length ++;
        }
        else
        {
            if(length > maxlength)
            {
                maxlength = length;
            }
            length = 0;
        }
        num /= 2;
    }
    if(num == 1)
    {
        length ++;
    }
    if(length > maxlength)
    {
        maxlength = length;
    }
    length = 0;
    cout << maxlength << endl;
    return 0;
}
