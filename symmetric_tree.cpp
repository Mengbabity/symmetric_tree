class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return mirror(root->left,root->right);
    }
    
    bool mirror(TreeNode*p,TreeNode*q)
    {
        if(p==NULL && q==NULL)
            return true;
        else if(p==NULL || q==NULL)
            return false;
        
        if(p->val != q->val)
            return false;
        
        return (mirror(p->left,q->right) && mirror(p->right,q->left));
    }
};
