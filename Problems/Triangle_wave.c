//
//  main.c
//  triangle_wave
//
//  Created by Saeed Aliyu on 25/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>

int main()
{
    int count_inside, count = 0, count_T = 0, T, a, b, i;
    
    scanf("%d", &T);
    
    for (count_T = 0; count_T < T; count_T++)
    {
        scanf("%d %d", &a, &b );
        
        for (count = 1; count <=b; count++)
        {
            i = 1;
            while ( i<= a )
            {
                count_inside = 0;
                while(count_inside < i)
                {
                    printf("%d", i);
                    count_inside++;
                }
                i++;
                printf("\n");
            }
            i = i -2;
            while ( i>0 )
            {
                count_inside =0;
                while(count_inside < i)
                {
                    printf("%d", i);
                    count_inside++;
                }
                --i;
                printf("\n");
            }
            if ( count + 1<=b)
                printf("\n");
        }
        if (count_T + 1 < T )
            printf("\n");
    }
    
    return (0);
    
}
