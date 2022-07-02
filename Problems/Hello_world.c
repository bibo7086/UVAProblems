//
//  main.c
//  Hello_World
//
//  Created by Saeed Aliyu on 22/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>

int main()
{
    int count, i, N, Case = 1;

    for(scanf("%d", &N); N > 0; scanf("%d", &N))
{
    count = 0;
    if ( N ==1)
    printf("Case %d: %d\n",Case, count);

    i = 1, count = 1;
    while ( i< N) {
        
        
    i = i * 2;

   if (i ==N)
       printf("Case %d: %d\n",Case, count);
        
   else if ( i > N )
        printf("Case %d: %d\n",Case, count);
        count++;
    }
    Case++;
}
    return 0;
}