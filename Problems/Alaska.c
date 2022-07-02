//
//  main.c
//  Alaska
//
//  Created by Saeed Aliyu on 8/28/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

int mycmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int mile[4000];
int main()
{
    int n, i, possible;
    while (scanf("%d",&n) && n!=0)
    {
        for (i=0 ; i<n ; i++)
            scanf("%d",&mile[i]);
        qsort(mile,n,sizeof(int),mycmp);
        possible=1;
    
        for (i=1 ; i<n && possible ; i++)
        {
            if (mile[i]-mile[i-1]>200)
                possible=0;
        }
        if (2*(1422-mile[n-1])>200)
            possible=0;
        if (possible)
            printf("POSSIBLE\n");
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}
    
