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
    bool isUgly(int num) {
        if (num == 0) {
            return false;
        }
        while(num % 2 == 0)
            num /= 2;
        while(num % 3 == 0)
            num /= 3;
        while(num % 5 == 0)
            num /= 5;
        return (num == 1) ? true : false;
    }
};
int main(){
    int s;
    cin>>s;
    Solution n;
    cout<<n.isUgly(s);
    return 0 ;
}
