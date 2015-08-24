//
//  main.cpp
//  Excel Sheet Column Number
//
//  Created by shuye on 15/8/24.
//  Copyright (c) 2015年 shuye. All rights reserved.
//

#include <iostream>
using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
        int value;
        for (int i=0; i<s.length(); i++) {
            value+=s[i]-'A'+1;
        }
        return value;
    }
};
int main(){
    string s;
    cin>>s;
    Solution n;
    cout<<n.titleToNumber(s);
    return 0 ;
}
