//
//  main.c
//  cost_cutting
//
//  Created by Saeed Aliyu on 12/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//



#include <stdio.h>
int main()
{
    int t, i, j, k, count = 1, s = 0;
    scanf("%d\n", &t);
    
    while (count <= t && scanf("%d %d %d\n", &i, &j, &k))
    {
        if ( (i < k && i > j) || (i < j && i > k))
            s = i;
        else if ( (j < i && j > k) || (j > i && j < k))
            s = j;
        else if (( k < j && k> i ) || (k>j && k < i))
            s = k;
        
        printf("Case %d: %d\n", count, s);
        ++count;
        
        
    }
    return (0);
}