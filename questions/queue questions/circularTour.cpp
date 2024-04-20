// class Solution {
// public:
//  int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

//         int totalgas = 0;
//         int currgas=0;
//         int startIndex =0;
//         for(int i=0;i<gas.size();i++){
//             currgas +=gas[i]-cost[i];
//             totalgas+=gas[i]-cost[i];
//             if(currgas<0){
//                 startIndex = i+1;
//                 currgas=0;
//             }
//         }
//         return totalgas>=0 ? startIndex:-1;
//     }
// };

// //approach 2 - queue 
// class Solution{
//   public:
  
//     //Function to find starting point where the truck can start to get through
//     //the complete circle without exhausting its petrol in between.
//     int tour(petrolPump p[],int n)
//     {
//        int deficit = 0;
//        int balance = 0;
//        int start = 0;
       
//        for(int i=0; i<n; i++) {
//            balance += p[i].petrol - p[i].distance;
//            if(balance < 0) {
//                start = i+1;
//                deficit += balance;
//                balance = 0;
//            }
//        }
       
//        if(balance + deficit >=0) 
//             return start;
//         return -1;
       
//     }
// };
