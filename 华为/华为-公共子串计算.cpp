#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    int lena,lenb;
    int Count = 0,countMax = 0;
    lena = a.length();
    lenb = b.length();
    for(int i = 0; i < lena; i++)
    {
        for(int j = 0; j < lenb; j++)
        {
            if(a[i] == b[j])
            {
                Count ++;
                for(int k = 1; k < lenb - j + 1; k++)
                {
                    if(a[i + k] == b [j + k])
                    {
                        Count ++;
                    }
                    else
                    {
                        if(Count > countMax)
                            countMax = Count;
                        break;
                    }
                }
                Count = 0;
            }
        }
    }
    cout << countMax << endl;
    return 0;
}
