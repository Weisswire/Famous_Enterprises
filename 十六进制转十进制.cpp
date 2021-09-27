#include <iostream>
#include <math.h>
using namespace std;

int todec(string hex)
{
    int sum = 0;
    int s = hex.size();
    for (int i = s-1,j = 0; i > 1; i--,j++)
    {
        if (hex[i] == '0')
            sum += 0;
        else if(hex[i] == '1')
            sum += 1 * pow(16,j);
        else if(hex[i] == '2')
            sum += 2 * pow(16,j);
        else if(hex[i] == '3')
            sum += 3 * pow(16,j);
        else if(hex[i] == '4')
            sum += 4 * pow(16,j);
        else if(hex[i] == '5')
            sum += 5 * pow(16,j);
        else if(hex[i] == '6')
            sum += 6 * pow(16,j);
        else if(hex[i] == '7')
            sum += 7 * pow(16,j);
        else if(hex[i] == '8')
            sum += 8 * pow(16,j);
        else if(hex[i] == '9')
            sum += 9 * pow(16,j);

        else if(hex[i] == 'A')
            sum += 10 * pow(16,j);
        else if(hex[i] == 'B')
            sum += 11 * pow(16,j);
        else if(hex[i] == 'C')
            sum += 12 * pow(16,j);
        else if(hex[i] == 'D')
            sum += 13 * pow(16,j);
        else if(hex[i] == 'E')
            sum += 14 * pow(16,j);
        else if(hex[i] == 'F')
            sum += 15 * pow(16,j);
    }
    return sum;
}
int main()
{
    string x;
    getline(cin,x);
    cout << todec(x) << endl;
    return 0;
}
