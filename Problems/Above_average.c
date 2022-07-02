//
//  main.c
//  Above_average
//
//  Created by Saeed Aliyu on 7/24/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>

int main()
{
    int C, N, people[1000], i, j;
    float average, sum, count;
    scanf("%d", &C);
    
    for (i = 1  ; i <= C; i++)
    {
        scanf("%d", &N);
        count = 0;
        sum = 0;
        
        for (j = 0; j < N ; j++)
        {
            scanf("%d", &people[j]);
            sum += people[j];
        }
        average = sum/N;
        
        for (j = 0; j < N ; j++)
            if (people[j] > average) {
                count++;
            }
        
        printf("%.3lf%%\n", (count/N)*100);
        
    }
    return 0 ;
    
}

