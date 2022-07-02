//
//  main.cpp
//  hour_glass_problem
//
//  Created by Saeed Ali on 2/26/18.
//  Copyright © 2018 Saeed Ali. All rights reserved.
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }
    
    int sum = 0;
    int current_sum = -10000;
    
    for(int i = 0; i < 6-2; i++)
        for (int j = 0 ; j < 6-2; j++) {
            sum = 0 ;
            sum += arr[i][j];
            sum += arr[i][j+1];
            sum += arr[i][j+2];
            
            sum += arr[i+1][j+1];
            
            sum += arr[i+2][j];
            sum += arr[i+2][j+1];
            sum += arr[i+2][j+2];
            
            
            if (sum > current_sum)
                current_sum = sum;
            
            
        }
    
    cout << current_sum << endl;
}

