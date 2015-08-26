//
//  main.cpp
//  Excel Sheet Column Number
//
//  Created by shuye on 15/8/24.
//  Copyright (c) 2015年 shuye. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) {
            return false;
        }
        sort(s.rbegin(),s.rend());
        sort(t.rbegin(),t.rend());
        if (s==t) {
            return true;
        }else
            return false;
    }
};
int main(){
    string s,t;
    s="acb";
    t="cba";
    Solution n;
    
    cout<<n.isAnagram(s, t);
    
}