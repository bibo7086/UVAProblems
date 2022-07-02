//
//  main.c
//  pizza_cutting
//
//  Created by Saeed Aliyu on 20/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>

int main()
{
    long long i, cuts, sum;
    while (scanf("%lld", &cuts)==1 && cuts>=0)
    {
        sum = 0;
        for (i = cuts ; i !=0; --i) {
            sum += i;
        }
        printf("%lld\n", sum+1);
        
}
    return 0;
}