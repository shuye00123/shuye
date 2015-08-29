//
//  ss.cpp
//  Excel Sheet Column Number
//
//  Created by shuye on 15/8/29.
//  Copyright (c) 2015年 shuye. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int len = nums.size();
        int i=0;
        vector<string> result;
        while(i<len){
            int j=1;
            while(i+j<len && nums[i+j] - nums[i] == j)
                j++;
            result.push_back(j==1 ? to_string(nums[i]) : to_string(nums[i]) + "->" + to_string(nums[i + j - 1]));
            i += j;
        }
        return result;
    }
};
int main(){
    vector<int> a;
    vector<string> b;
    //a.push_back();
    Solution n;
    b=n.summaryRanges(a);
    cout<<b[0];
}