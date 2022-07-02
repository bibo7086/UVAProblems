//
//  main.c
//  Age_sort
//
//  Created by Saeed Aliyu on 9/10/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

int age[2000001];

int sort(const void *a, const void *b);

int main()
{
    int n,i;
    while (scanf("%d",&n)==1&& n) {
        for (i = 0 ; i < n ; i++)
            scanf("%d", &age[i]);
        
        qsort((void*)age,n,sizeof(int), sort);
        for( i = 0; i<n; i++){
            printf("%d", age[i]);
            if (i!=n-1)
                printf(" ");
        }
        printf("\n");
        
        
    }
    return 0 ;
}

int sort(const void *a, const void *b)
{
    int *c, *d;
    c = (int*)a;
    d = (int*)b;
    
    return (*c - *d);
}
/* i think another alternative to achieving this is the following
 int cmpfunc (const void * a, const void * b)
 {
 return ( *(int*)a - *(int*)b );
 }
 */
