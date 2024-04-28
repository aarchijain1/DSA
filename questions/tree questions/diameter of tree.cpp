//longest path between any two nodes
// three ways to find diameter - ans is in left subtree
//                             - ans is in right sub tree
//                             - ans is in left and right sub tree ie combo
//  ALGORITHM
//  1) diameter(root->left)
//  2) diameter(root->right)
//  3)height(root->left )+ 1 + height(root->right)
//   and then max(1,2,3)


// o(n^2) time complexity
// class Solution {
//     private:
     
//     int maxDepth(TreeNode* root) {
//         if(root == NULL) return 0;
//         int left = maxDepth(root ->left);
//         int right = maxDepth(root->right);
        
//         int ans = max(left, right) + 1;
//         return ans;
//     }
//   public:
//     int diameter(struct Node* root){
//         if(root == NULL){
//             return 0;
//         }
//         int op1= diameter(root->left);
//         int op2= diameter(root->right);
//         int op3 = maxDepth(root->left) + 1 + maxDepth(root->right);
//         int ans = max(op1,op2,op3);
// return ans;
//     }