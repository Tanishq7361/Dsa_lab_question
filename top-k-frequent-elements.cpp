#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> topKFrequent(vector<int>&a,int k){
            int n=a.size();
            vector<int>ans;
            map<int,int>mpp;
            for(int i=0; i<n; i++){
                mpp[a[i]]++;
            }
            vector<pair<int, int>>v(mpp.begin(),mpp.end());
            sort(v.begin(),v.end(),[](pair<int,int>&a,pair<int,int>&b){
                return a.second>b.second;
            });
            int i=0;
            while(k--){
                ans.push_back(v[i].first);
                i++;
            }
            return ans;
        }
};

int main() {
    Solution s;
    vector<int>a={1,1,1,2,2,3};
    int k=2;
    vector<int>result=s.topKFrequent(a,k);
    cout << "Top " << k << " frequent elements: ";
    for(int i=0;i<result.size();i++) {
        cout<<result[i]<< " ";
    }
    return 0;
}
