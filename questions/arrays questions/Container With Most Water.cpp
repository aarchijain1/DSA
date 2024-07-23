// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int i=0;
//         int maxarea=-1;
//         int n=height.size()-1;
//         while(i < n){
//             int mini=min(height[i],height[n]);
//             int area=0;
//             area=min(height[i],height[n])*(n-i);
//             if(mini == height[i]) i++;
//             else  n--;
//             if(area>maxarea) maxarea=area;
//         }
//         return maxarea;
//     }
// };