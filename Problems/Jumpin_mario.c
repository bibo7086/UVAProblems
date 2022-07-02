//
//  main.c
//  jumping_mario
//
//  Created by Saeed Aliyu on 20/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include<stdio.h>

int main()
{
    int t, N, height[50], high_jump, low_jump, count = 1, i;
    
    scanf("%d", &t);
    while (count <=t ) {
        scanf("%d", &N);
        i = 0;
        while  (i < N){
            scanf("%d", &height[i]);
            ++i;
        }
    
        high_jump = 0, low_jump = 0;
        for (i=0 ;i < N-1 ;++i)
        {
            if (height[i+1] > height[i])
                high_jump += 1;
            else if (height[i+1] < height[i])
                low_jump += 1;
            else if(height[i] == height[i+1])
                continue;
        }
        printf("Case %d: %d %d\n", count, high_jump, low_jump);
        count++;
    }
    
    return (0);
}

