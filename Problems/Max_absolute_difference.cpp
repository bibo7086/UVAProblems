//
//  main.cpp
//  max_absulute_difference
//
//  Created by Saeed Ali on 6/27/18.
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

class Difference {
private:
    vector<int> elements;
    
public:
    Difference(vector<int> a): elements(a) {
        
    }
    int maximumDifference = 0;
    void computeDifference() {
        
        int n = elements.size();
        int result;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                result = abs(elements[i] - elements[j]);
                if(result > maximumDifference)
                    maximumDifference = result;
            }
        }
    }
    
};

int main(){
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    //
    cout << d.maximumDifference;
    return 0;
}
