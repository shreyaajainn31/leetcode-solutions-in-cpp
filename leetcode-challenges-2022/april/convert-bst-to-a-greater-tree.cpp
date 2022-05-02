/*
538. Convert BST to Greater Tree
Medium

4181

158

Add to List

Share
Given the root of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.

As a reminder, a binary search tree is a tree that satisfies these constraints:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 

Example 1:


Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
Example 2:

Input: root = [0,null,1]
Output: [1,null,1]
 

Constraints:

The number of nodes in the tree is in the range [0, 104].
-104 <= Node.val <= 104
All the values in the tree are unique.
root is guaranteed to be a valid binary search tree.
 

Note: This question is the same as 1038: https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     map<int,int> map; 
    
//      int findingSum(TreeNode * root, int val){
//          // int sum =0;
         
//           if(root == nullptr){
//              return 0;     
//           }
         
//           if(root->val > val){
//               return root->val + findingSum(root,val);
//           }
         
//           return findingSum(root->left,val) + findingSum(root->right,val);
         
//      } 
    
//      void traverse(TreeNode * root){
// //          if(root == nullptr){
// //              return;
// //          }
         
// //          int sum = findingSum(root, root->val);
// //          map.insert(make_pair(root->val, sum));
// //          traverse(root->left);
// //          traverse(root->right);
//      }
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if(root == nullptr){
            return root;
        }
        
        convertBST(root->right);
        sum += root->val;
        root->val = sum;
        convertBST(root->left);
        
        
        return root;
    }
};
