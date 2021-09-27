#include <stdio.h>
int main(void)
{
    int r,y,g,n,k,t,s=0,i;
    scanf("%d %d %d",&r,&y,&g);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&k,&t);
        if(k ==0||k ==1)
            s=s+t;
        if(k ==2)
            s=s+t+r;
    }
    printf("%d",s);
    return 0;
}
