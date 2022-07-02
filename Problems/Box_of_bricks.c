//
//  main.c
//  Box_of_Bricks
//
//  Created by Saeed Aliyu on 7/24/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, height[100], i= 0, count = 1, moves = 0, sum =0, average =0;
    
    while(scanf("%d", &n), n) {
        
        sum = 0;
        i= 0;
        while (i < n){
            scanf("%d", &height[i]);
            sum += height[i++];
        }
        average = sum/n;
        moves = 0;
        for (i = 0 ; i < n ; i++) {
            if ( height[i] > average)
                moves += height[i] - average;
        }
        
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",count++, moves);
    }
    return 0;
}
