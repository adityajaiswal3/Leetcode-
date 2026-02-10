class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m=strs[0].size();
        int n=strs.size();
        string ans="";
        bool tell=true;
        for(int i=0;i<m;i++)
        {
            string temp=strs[0].substr(0,i+1);
            for(int j=0;j<n;j++)
            {
                string temp2=strs[j].substr(0,i+1);
                if(temp!=temp2)
                {
                    tell=false;
                    break;
                }
            }
            if(tell==false)
            {
                return ans;
            }
            if(temp>ans)
            {
                ans=temp;
            }

        }
        return ans;
    }
};