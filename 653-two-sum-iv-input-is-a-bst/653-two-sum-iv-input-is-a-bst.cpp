/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int 
 x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorder;
    void traverse(TreeNode* root){
        if(!root) return;
        traverse(root->left);
        inorder.push_back(root->val);
        traverse(root->right);
    }
    bool check(int target){
        for(int i = 0; i < inorder.size(); i++)
            for(int j = i+1; j < inorder.size(); j++)
                if(inorder[i] + inorder[j] == target) return true;
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        traverse(root);
        return check(k);
    }
};