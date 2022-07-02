//
//  main.c
//  Lumberjack_sequencing
//
//  Created by Saeed Aliyu on 8/4/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>

int main()
{
    int N, integer[10], i, COUNT_1 = 1, COUNT_2 = 1,j=1;

    scanf("%d",&N);
    printf("Lumberjacks:\n");
    
    while (j <=  N){
        
        
        for (i = 0 ; i < 10 ; i++) {
            COUNT_1 = 0;
            COUNT_2 = 0;
            scanf("%d", &integer[i]);
        }
        
        for (i = 0 ; i < 9 ; i++) {
            if ( integer[i] > integer[i+1])
                COUNT_1++;
            
            if ( integer[i] < integer[i+1])
                COUNT_2++;
        }
        if (COUNT_1 == 9|| COUNT_2 == 9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
        j++;
    }
    
    return 0;
}
