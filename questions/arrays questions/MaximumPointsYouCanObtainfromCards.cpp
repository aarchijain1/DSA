// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int sum = 0;
//         int n = cardPoints.size();
        
//         // Calculate the initial sum of the first k elements
//         for (int i = 0; i < k; i++) {
//             sum += cardPoints[i];
//         }
        
//         int maxSum = sum;
        
//         // Sliding window approach
//         // Calculate the sum by sliding the window from the beginning to the end
//         // and subtracting the first element of the window while adding the next element
//         for (int i = k - 1, j = n - 1; i >= 0; i--, j--) {
//             sum -= cardPoints[i];
//             sum += cardPoints[j];
//             maxSum = max(maxSum, sum);
//         }
        
//         return maxSum;
//     }
// };
