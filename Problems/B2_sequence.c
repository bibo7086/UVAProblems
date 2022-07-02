
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10000], m=0,n,j,i,k,sequence,c[10000];
    
    while(scanf("%d",&n)==1)
    {
        sequence=1;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        if(a[0]<1)
        {
            printf("Case #%d: It is not a B2-Sequence.\n\n",++m);
            sequence = 0;
            continue;
        }
        for(i=0; i<n-1; i++)
            if(a[i]>=a[i+1])
            {
                sequence =0;
                break;
            }
        if(!sequence)
        {
            printf("Case #%d: It is not a B2-Sequence.\n\n",++m);
            continue;
        }
        k=-1;
        for(i=0; i<n; i++)
            for(j=i; j<n;j++)
            {
                c[++k]=a[i]+a[j];
            }
        
        for(i=0; i<k; i++)
            for(j=i+1; j<=k; j++)
            {
                if(c[i]==c[j])
                {
                    sequence=0;
                    break;
                }
                
                if(!sequence)
                    break;
            }
        if(sequence)
            printf("Case #%d: It is a B2-Sequence.\n\n",++m);
        else
            printf("Case #%d: It is not a B2-Sequence.\n\n",++m);
    }
    return 0;
}
