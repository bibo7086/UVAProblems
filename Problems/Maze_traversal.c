//
//  main.c
//  maze_Traversal
//
//  Created by Saeed Aliyu on 29/11/15.
//  Copyright © 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int t, r, c, location1, location2, count=0, i, j;
    char array[100][100], direction;
    
    scanf("%d", &t);
    
    while (t) {
        count = 0;
        scanf("%d %d", &r, &c);
        for (i =0; i < r; i++)
            for (j = 0 ; j < c && array[i][j] != '\n' ; j++) {
                scanf("%c &c ", &array[i][j]);
            }
        scanf("%d %d", &location1, &location2);
        scanf("%c ", &direction);
        
        while (scanf("%c", &direction)) {
            if (direction == 'Q')
                break;

            if(array[location1][location2] == ' '){
                if (direction == 'R')
                count++;
                if (direction == 'L')
                count--;
           
                if (count > 3)
                count = 0;
                
            
                if (direction == 'F' && count== 0)
                    location2--;
                else if (direction == 'F' && count == 1)
                    location1++;
                else if (direction == 'F' && count == 2)
                    location2++;
                else if (direction == 'F' && count == 3 )
                    location1--;
            }
        }
        
        
        printf("%d %d ", location1, location2);
        
        switch (count) {
            case 0:
                printf("N\n");
                break;
            case 1:
                printf("E\n");
                break;

            case 2:
                printf("S\n");
                break;

            case 3:
                printf("W\n");
                break;

                
            default:
                break;
        }

    }
}