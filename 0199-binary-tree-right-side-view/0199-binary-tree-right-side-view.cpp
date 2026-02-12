class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
       queue<TreeNode*>q;
       vector<int>ans;
       if(root==NULL)
       {
           return ans;
       }
       q.push(root);
       while(!q.empty())
       {
           int n=q.size();
           TreeNode* p;
           while(n--)
           {
               p=q.front();
               q.pop();
               if(p->left)
               {
                   q.push(p->left);
               }
               if(p->right)
               {
                   q.push(p->right);
               }
           }
           ans.push_back(p->val);
       }
       return ans;
    }
};