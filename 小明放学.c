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
		if(k==0)  //�޺��̵�
		{
			time+=t;
		}
		else if(k==1)  //����ʱΪ���
		{
			if(t>=time) //���ʱ�䳤����·
			{
				time=t;
			}
			else
			{
				t=time-t;
				t=t%sum;
				if(t>g&&t<=g+y)//��ǰΪ�Ƶ�
					time+=(y-(t-g)+r);
				else if(t>g+y&&t<g+y+r) {   //��ǰ����
					time+=(r-(t-g-y));
				}
			}

		}
		else if(k==2)  //����ʱΪ�Ƶ�
		{
			if(t>=time){    //��Ϊ�Ƶ�
				time=t+r;
			}
			else{
				t=time-t;
				t=t%sum;
				if(t<r)//��ǰΪ���
					time+=(r-t);
				else if(t>r+g&&t<r+g+y) {   //��ǰ��Ƶ�
					time+=(y-(t-r-g)+r);
				}
			}
		}
		else if(k==3) //����ʱΪ�̵�
		{
			if(t<time) {
				t=time-t;
				t=t%sum;
				if(t<=y){  //��ǰΪ�Ƶ�
					time+=(y-t+r);
				}
				else if(t>y&&t<y+r)//��ǰΪ���
					time+=(r-(t-y));
			}

		}

    }
    printf("%lld",time);
    return 0;
}
