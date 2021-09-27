#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int tobinary(int x)
{
    stack <int> a;
    int count = 0,temp = 0;
    while(x / 2)
    {
        temp = x % 2;
        a.push(temp);
        x = x/2;
    }
    a.push(x);
    vector<int>b;
    int size = a.size();
    for(int i = 0;i < size;i++)
    {
        b.push_back(a.top());
        a.pop();
    }
    for(int j = 0; j < b.size();j++)
    {
        if(b[j] == 1)
            count++;
    }
    return count;
}
int main()
{
    int x;
    cin >> x;
    cout << tobinary(x);
    return 0;
}
