//
//  aa.cpp
//  Excel Sheet Column Number
//
//  Created by shuye on 15/8/27.
//  Copyright (c) 2015年 shuye. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(!n){
            return 0;
        }
        while (n!=1) {
            if(n%2!=0){
                return 0;
            }
            n=n/2;
        }
        return 1;
    }
};
int main(){
    int i;
    cin>>i;
    Solution n ;
    cout<<n.isPowerOfTwo(i);
}