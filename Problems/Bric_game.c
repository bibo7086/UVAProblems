//
//  main.c
//  Brick_game
//
//  Created by Saeed Aliyu on 7/22/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


void selection_sort(int list_size, int array_to_sort[]);

int main()
{
    
    int T, count = 1, N = 0, i, j, mid_age = 0;
    
    scanf("%d",&T);
    int age[10] = {0};
    
    for (i = 1; i <=T; i++) {
        scanf("%d", &N);
        j = 0;
        while (j<N ) {
            scanf("%d",&age[j]);
            j++;
            
            mid_age = N/2;
            
        }
        
        printf("Case %d: %d\n", count, age[mid_age]);
        count++;
        
    }
    return 0;
}


void selection_sort(int list_size, int array_to_sort[])
{
    
    int i;
    int index_of_largest, last, temp;
    
    for (last = list_size - 1; last>= 1; last-- )
    {
        index_of_largest = 0;
        
        for (i = 1; i <= last; i++)
        {
            if (array_to_sort[i] > array_to_sort[index_of_largest])
                index_of_largest = i;
        }
        temp = array_to_sort[last];
        array_to_sort[last] = array_to_sort[index_of_largest];
        array_to_sort[index_of_largest] = temp;
    }
    
}
