//
//  main.c
//  odd_sum
//
//  Created by Saeed Aliyu on 01/06/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//
#include <stdio.h>
int main()
{
    int T, count = 0, sum_of_odd = 0, N1, N2;
    scanf("%d", &T);
    
    while (count <T && scanf("%d %d", &N1, &N2))
    {
        sum_of_odd = 0;
        while( N1 <= N2){
        if (N1 % 2)
            sum_of_odd += N1;
        N1++;
        }
        count++;
        printf("Case %d: %d\n", count, sum_of_odd);

    }           return 0;

}