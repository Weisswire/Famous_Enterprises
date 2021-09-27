/*
思路：对于将M个苹果放在N个盘子里，可以分为如下几种情况：
1.N个盘子中都有苹果
2.N个盘子中至少有1个盘子没有苹果
f(m,n)=f(m,n-1)+f(m-n,n);
若N大于M，则肯定有空盘子，不妨把这些空盘子放在一边。转换成求解f(m,m)的问题

*/
#include<iostream>
using namespace std;
int f(int m,int n)
{
    if(m==0 || n==1)         //直到最后苹果被放完了或还剩一个苹果，均只有一种放法
        return 1;
    if(m<n)                  //苹果数小于盘子数
        return f(m,m);
    return f(m,n-1)+f(m-n,n);
}
int main()
{
    int m,n;
    while(cin>>m>>n)
        cout<<f(m,n)<<endl;
    return 0;
}
