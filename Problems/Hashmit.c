//
//  main.c
//  Hashmit
//
//  Created by Saeed Aliyu on 13/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long i, j, d;
    while (scanf("%lld %lld", &i, &j) ==2)
    {
      
        d =i>=j?i-j:j-i;
   
    printf("%lld\n",d);

    }
    return (0);
}
