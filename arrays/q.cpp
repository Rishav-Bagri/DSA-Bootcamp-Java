#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        bool solve(vector<int>& nums,int goal  ){
            if(goal==0){
                return 1;
            }
            // cout<<goal<<" ";
            bool reachedLastIndex = 0;
            for(int i=goal-1;i>0;i--){
                cout<<goal<<" (";
                cout<<i<<" ";
                cout<<nums[i]<<" )";
                if(i+nums[i]>=goal){
                    // cout<<i<<" ";
                    reachedLastIndex = solve(nums, i);
                }
                
                if(reachedLastIndex==1){
                    return 1;
                }
            }
            return 0;
        }
        bool canJump(vector<int>& nums) {
            
            return solve(nums,nums.size()-1 );
        }
};
int main(){
    vector<int> nums{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 ,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 ,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 ,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    Solution sol;
    cout<<(sol.canJump(nums));
    return 0;
}