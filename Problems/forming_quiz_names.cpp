//
//  main.cpp
//  forming_quiz_teams
//
//  Created by Saeed Ali on 27/03/2016.
//  Copyright © 2016 Saeed Ali. All rights reserved.
//

#include <iostream>
#include <algorithm> 
#include <string.h> 
#include <math.h> 

using namespace std;

int N;
double dist[20][20], memo[1 << 16]; // 1<< 16 is 2^16, recall that max N = 8

double matching(int bit_mask){
    if (memo[bit_mask > -0.5]) // see taht we initialize the array with -1
        return memo[bit_mask];
    if(bit_mask == (1 << 2*N) -1 )// all are matched
        return memo[bit_mask] = 0 ;
    
    double matching_value = 32767 * 32767; // intialize with large value
    
    for (int p1 = 0 ; p1 < 2*N ; p1++)
        if(!(bit_mask & (1 << p1))) { // if this bith is off
            for (int p2 = p1 + 1; p2 < 2 * N; p2++)
                if(!(bit_mask &&(1 << p2)))// if this different bit is also off
                    matching_value = min(matching_value,
                                         dist[p1][p2] + matching(bit_mask| (1 << p1)| (1 << p2)));
            break; // this 'break' is necessary. do you understand ?
        } // hint: it helps reducing the complexity from O((2N)^2 * 2^(2N)) to 2^(2N))
            return memo[bit_mask] = matching_value;
    }
    
    int main()
    {
        char line[1000], name[1000];
        int i, j ,caseNo = 1, x[20], y[20];
        //freopen("10911.txt", "r", stdin); // one way to simplify testgin
        while(scanf(gets(line), "%d", &N), N){
            for(i = 0; i < 2*N ; i ++)
                sscanf(gets(line), "%s %d %d", &name, &x[i], &y[i]);
            
            for(i = 0; i < 2 *N; i++)// build pairwise distance table
                for( j = 0; j < 2 *N; j++)
                    dist[i][j]  = sqrt((double)(x[i] - x[j])  *(x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
                                       
            // Using DP to solve the matching on general graph
        memset(memo,  -1, sizeof memo);
        printf("Case %d: %.2lf\n", caseNo++, matching(0));
                                                }
        return 0;
        }
                                       
                    
                                