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
class FindElements {
public:
    set<int>s;
    FindElements(TreeNode* root) {
        root->val=0;
        s.insert(0);
        helper(root,root->left);
        helper(root,root->right);
    }
    
    bool find(int target) {
        if(s.find(target)!=s.end())
            return true;
        else
            return false;
    }
    void helper(TreeNode* parent,TreeNode* root)
    {
        if(root==NULL)
            return;
        if(parent->left==root)
            root->val=2*parent->val+1;
        else
            root->val=2*parent->val+2;
        s.insert(root->val);
        helper(root,root->left);
        helper(root,root->right);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */