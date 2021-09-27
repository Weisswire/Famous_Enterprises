#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
int main(void){
   int h;int l;
    while(cin>>h>>l)
    {
        if(h>9||l>9)  cout<<"-1"<<endl;
        else cout<<"0"<<endl;
        int c1h,c1l,c2h,c2l;
        cin>>c1h>>c1l>>c2h>>c2l;
        if(c1h>=0 && c1h<h && c1l>=0 && c1l<l && c2h>=0 && c2h<h &&c2l>=0 && c2l<l )
            cout<<"0"<<endl;
        else cout<<"-1"<<endl;
        int d,e;cin>>d>>e;
        if(d>=0 && d<h) cout<<"0"<<endl;
        else cout<<"-1"<<endl;
         if(e>=0 && e<l) cout<<"0"<<endl;
        else cout<<"-1"<<endl;
        int m,n;
        cin>>m>>n;
        if(m>=0 &&m<h && n>=0 && n<l)
            cout<<"0"<<endl;
        else cout<<"-1"<<endl;
    }
}
