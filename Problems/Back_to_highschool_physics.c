//
//  main.c
//  back_to_high_physics
//
//  Created by Saeed Aliyu on 11/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>

int main(){
    int v, t;
    
    while(scanf("%d %d", &v, &t) ==3)
    {
        printf("%d\n", v * (2*t));
    }
    return (0);
}
