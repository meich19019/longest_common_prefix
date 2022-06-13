//
//  main.cpp
//  longest_common_prefix
//
//  Created by 梅智皓 on 2022/6/13.
//  Copyright © 2022年 梅智皓. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestString = "";
        int pass;
        for(int i=0;i<strs[0].length();i++){
            pass = 0;
            string checkString = strs[0].substr(0,strs[0].length()-i);
            for(int k=1;k<strs.size();k++){
                if(strs[k].substr(0,strs[0].length()-i) == checkString){
                    pass++;
                }
            }
            if(pass == strs.size()-1){
                longestString = checkString;
                break;
            }
        }
        return longestString;
    }
};

int main(int argc, const char * argv[]) {
    vector<string> strs = {"flower","flow","flight"};
    Solution solution;
    cout<<solution.longestCommonPrefix(strs)<<endl;
    return 0;
}
