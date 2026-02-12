class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)
        {
            return ans;
        }
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v;
            while(n--)
            {
                TreeNode* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                
            }
            ans.push_back(v);
        }
        return ans;
    }
};