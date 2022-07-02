//
//  main.c
//  summing_digits
//
//  Created by Saeed Aliyu on 27/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>

int add_numbers(long long);

int main()
{
    long long n;
    int result;
    
    for(scanf("%lld", &n); n !=0; scanf("%lld", &n)){
        result = 0 ;
    result = add_numbers(n);
    while(result >=10 )
        result = add_numbers(result);
    
    printf("%d\n", result);
    }
    return 0;




}

int add_numbers(long long n) {
    static int sum = 0;
    
    if (n == 0) {
        return 0;
    }
    
    sum = n%10 + add_numbers(n/10);
    
    return sum;
}