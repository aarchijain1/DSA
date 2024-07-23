//leetcode.com/problems/find-the-duplicate-number/description/

// 4 SOLUTIONS

// class Solution {
// public:
// int findDuplicate(vector<int>& nums) {
// while(nums[0]!=nums[nums[0]]){ 
//     swap(nums[0],nums[nums[0]]); 
//     }
//      return nums[0];
// }
// };

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//        unordered_map<int,int> mp;
//         for(auto i:nums){
//             mp[i]++;
//         }
//         for(auto j:mp){
//             if(j.second>1) return j.first;
//         }
//         return 0; 
//     }
// };

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n=nums.size();int ans=0;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n-1;i++){
//             if(nums[i]==nums[i+1]) ans=nums[i];
//                    }
//                    return ans;
//     }
// };

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n=nums.size();
//         int count=0; int j=2;
//         for(int i=1;i<n-1;i++){
//             while(j>i){
//                 if(nums[i]!=nums[j]) j++;
//                 else if(nums[i]==nums[j]) count=nums[i];
//             }
//         }
//     return count;
//     }
// };

