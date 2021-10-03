#include<stdio.h>
int main()
{
    int a[1000], b[10000];
    int n,i,j,cnt;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i] =-1;
    }
    for(i=0;i<n;i++)
    {
        cnt=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cnt++;
                b[j]=0;
            }
        }
        if(b[i]!=0)
        {
            b[i]=cnt;
        }
    }
    printf("Frequency of all elements is : ");
    for(i=0;i<n;i++)
    {
        if(b[i]!=0)
        {
            printf("\n%d occurs %d times ",a[i],b[i]);
        }
    }
}
