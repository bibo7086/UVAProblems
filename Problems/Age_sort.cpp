//
//  main.cpp
//  age_sort_cpp
//
//  Created by Saeed Aliyu on 9/10/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <iostream>
#include <stdio.h> 
// resizing vector
#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> myvector;
    
    // set some initial content:
    for (int i=1;i<10;i++) myvector.push_back(i);
    
    myvector.resize(5);
  //  myvector.resize(8,100);
    //myvector.resize(12);
    
    std::cout << "myvector contains:";
    for (int i=0;i<myvector.size();i++)
        std::cout << ' ' << myvector[i];
    std::cout << '\n';
    myvector.resize(8,100);
    for (int i=0;i<myvector.size();i++)
        std::cout << ' ' << myvector[i];
    myvector.resize(12);
    for (int i=0;i<myvector.size();i++)
        std::cout << ' ' << myvector[i];

    
    return 0;
}

