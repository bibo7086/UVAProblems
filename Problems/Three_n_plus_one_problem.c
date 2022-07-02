//
//  main.c
//  three_n_plus_one_problem
//
//  Created by Saeed Aliyu on 10/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include<stdio.h>

int main()
{
    int n, m, count=1;
    
    while(scanf("%d %d", &n, &m))
        printf("%d %d", n, m );

    {
        while(1){
        if ( n == m)
            break;
    else if ( n % 2 != 0 )
          n = 3*n + 1;
    else
          n = n/2;
            count++;
    }
    }
printf("%d", count);

          return 0;
}