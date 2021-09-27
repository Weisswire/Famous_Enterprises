#include<stdio.h>
int main(void)
{
	long long r,y,g,n,k,t,time;
	time=0;
	scanf("%lld %lld %lld",&r,&y,&g);
	int sum=r+y+g;
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld %lld",&k,&t);
		if(k==0)  //无红绿灯
		{
			time+=t;
		}
		else if(k==1)  //出发时为红灯
		{
			if(t>=time) //红灯时间长于走路
			{
				time=t;
			}
			else
			{
				t=time-t;
				t=t%sum;
				if(t>g&&t<=g+y)//当前为黄灯
					time+=(y-(t-g)+r);
				else if(t>g+y&&t<g+y+r) {   //当前变红灯
					time+=(r-(t-g-y));
				}
			}

		}
		else if(k==2)  //出发时为黄灯
		{
			if(t>=time){    //仍为黄灯
				time=t+r;
			}
			else{
				t=time-t;
				t=t%sum;
				if(t<r)//当前为红灯
					time+=(r-t);
				else if(t>r+g&&t<r+g+y) {   //当前变黄灯
					time+=(y-(t-r-g)+r);
				}
			}
		}
		else if(k==3) //出发时为绿灯
		{
			if(t<time) {
				t=time-t;
				t=t%sum;
				if(t<=y){  //当前为黄灯
					time+=(y-t+r);
				}
				else if(t>y&&t<y+r)//当前为红灯
					time+=(r-(t-y));
			}

		}

    }
    printf("%lld",time);
    return 0;
}
