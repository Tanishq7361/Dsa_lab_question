#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size();
            map<int,pair<int,int>> mpp;
            for(int i=0;i<n;i++) {
                int x=target-nums[i];
                if(mpp[x].first>0) {
                    return {i,mpp[x].second};
                }
                else{
                    mpp[nums[i]].first++;
                    mpp[nums[i]].second=i;
                }
            }
            return{};
        }
};

int main() {
    Solution s;
    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>result=s.twoSum(nums,target);
    cout<<"Indices: ";
    for(int i=0;i<result.size();i++) {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
