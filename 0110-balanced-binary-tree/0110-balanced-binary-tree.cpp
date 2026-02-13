class Solution {
public:
    int hight(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int lh=1+hight(root->left);
        int rh=1+hight(root->right);
        return max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        int lh=hight(root->left)-1,rh=hight(root->right)-1;
        if(abs(lh-rh)<=1)
        {
            return isBalanced(root->left)&&isBalanced(root->right);
            
        }
        else{
            return false;
        }
        return true;
    }
};