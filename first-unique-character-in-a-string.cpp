#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int firstUniqChar(string s){
        int n=s.size();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mpp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    string str="leetcode";
    int result=s.firstUniqChar(str);
    if(result!=-1) {
        cout<< "First unique character is at index: "<<result<<endl;
    }
    else{
        cout<< "No unique character found." <<endl;
    }
    return 0;
}
