//
//  main.c
//  division of nlogonia
//
//  Created by Saeed Aliyu on 20/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>

int main()
{
    int k, i,
    M, N, X, Y;
    
    while (scanf("%d", &k) && k!=0)
    {
        
        scanf("%d %d", &M, &N);
        i =1;
        while (i<=k ) {
            scanf("%d %d", &X, &Y);
            if (X == M || Y == N)
                printf("divisa\n");
            else if ( X > M && Y > N )
                //this prints north east
                printf("NE\n");
            else if ( X < M && Y < N)
                printf("SO\n");
            else if ( X < M && Y > N)
                printf("NO\n");
            else if (X > M && Y< N)
                printf("SE\n");
            i++;
        }
    }
    
    return 0;
}
