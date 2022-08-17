#include <stdio.h>
#include<conio.h>
void main()
{
    int n[100],m[100],k,i;
    float s=0,p=0,ans,result,t=0;
    printf("enter the number of polymer samples");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        printf("enter the number of molecules present in each sample");
        scanf("%d",&n[i]);
    }
    for(i=0;i<k;i++)
    {
        printf("%d \n",n[i]);
    }
    for(i=0;i<k;i++)
    {
        printf("enter the molecular mass of each molecule");
        scanf("%d",&m[i]);
    }
    for(i=0;i<k;i++)
    {
        printf("%d \n",m[i]);
    }
    for(i=0;i<k;i++)
    {
        s=s+ (n[i]*m[i]);
    }
    for(i=0;i<k;i++)
    {
        p=p+n[i];
    }
    ans=s/p;
    printf("the number average molecular weight of the given sample %f \n",ans);
    for(i=0;i<k;i++)
    {
        t=t+ n[i]*(m[i]*m[i]);
    }
    result= t/s;
    printf("the weight average molecular mass is %f",result);
    
getch();
}
    
        
