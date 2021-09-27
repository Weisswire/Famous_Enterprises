#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <typeinfo>
#include <ctime>
using namespace std;

template<class T>
void Joseph(T collection,int n,int m)
{
    if(n < 1 || m < 1)
    {
        cout << "Error input number!" << endl;
        return;
    }
    for(int i = 1;i <= n;i++)
        collection.push_back(i);
    class T::iterator iter = collection.begin(),del;
    int counter = 1;
    clock_t start = clock(),finish;
    while(collection.size() > 1)
    {
        while (counter % m == 0 && collection.size() > 1)
        {
            counter = 1;
            if (typeid(collection)!=typeid(list<int>))
                iter = collection.erase(iter);
            else
            {
                del = iter;
                iter++;
                collection.erase(del);
            }
            if(iter == collection.end())
                iter = collection.begin();
        }
        counter++;
        iter++;
        if(iter == collection.end())
            iter = collection.begin();
    }
    finish = clock();
    cout << "最后剩余的人的编号是："  << *iter <<endl;
    //CLOCKS_PER_SEC是标准c的time.h头函数中宏定义的一个常数，表示一秒钟内CPU运行的时钟周期数，
    //用于将clock()函数的结果转化为以秒为单位的量，但是这个量的具体值是与操作系统相关的。
    cout << "使用容器 " << typeid(collection).name() << " 的运算时间为；" << 1.0*(finish-start)/CLOCKS_PER_SEC << "秒" <<endl;
}
int main()
{
    list <int>l;
    vector <int > v;
    deque <int> d;
    Joseph(l,100000,5);
    Joseph(d,100000,5);
    Joseph(v,100000,5);
    return 0;
}
