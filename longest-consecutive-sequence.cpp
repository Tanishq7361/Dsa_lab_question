#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int longestConsecutive(vector<int>& a) {
            int n=a.size();
            if(!n){
                return 0;
            }
            sort(a.begin(),a.end());
            int ans=0,temp=1;
            for(int i=1;i<n;i++) {
                if(a[i]==a[i-1]) {
                    continue;
                }
                if(a[i]==a[i-1]+1){
                    temp++;
                }
                else{
                    ans=max(ans,temp);
                    temp=1;
                }
            }
            ans=max(ans,temp);
            return ans;
        }
};

int main() {
    Solution s;
    vector<int>a={100,4,200,1,3,2};
    int result=s.longestConsecutive(a);
    cout << "Longest consecutive sequence length: " << result << endl;
    return 0;
}
