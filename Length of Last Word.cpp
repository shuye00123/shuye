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
    int lengthOfLastWord(string s) {
        int num=0;
        if (s.length()) {
            int r = s.length()-1;
            while (s[r]==' ') {
                r--;
            }
            for ( ; r>=0; r--) {
                if(s[r]==' '){
                    break;
                }
                num++;
            }
        }
        return num;
        
    }
};
int main(){
    string s;
    getline(cin,s);
    Solution n;
    cout<<n.lengthOfLastWord(s);
    return 0 ;
}
