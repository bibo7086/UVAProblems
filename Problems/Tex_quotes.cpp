//
//  main.cpp
//  Tex_quotes
//
//  Created by Saeed Ali on 22/04/2016.
//  Copyright © 2016 Saeed Ali. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    long long count = 0, length;
    string s1;
    while(getline(cin, s1)){
    length = s1.length();
    for(long long i = 0; i < length; i++)
    {
        if(s1[i] == '"')
        {
            count++;
        if(count%2 == 0)
            cout << "''";
        else
            cout << "``";
        }
        else
            
        cout << s1[i];
    }
        cout << endl;
    }
    
    return 0 ;

}

    
    
    

