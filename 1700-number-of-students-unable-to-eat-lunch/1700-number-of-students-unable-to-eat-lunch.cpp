class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        
        for(int x : students) q.push(x);

        int i = 0, count = 0;

        while(!q.empty() && count < q.size()) {
            if(q.front() == sandwiches[i]) {
                q.pop();
                i++;
                count = 0;
            }
            else {
                int val = q.front();
                q.pop();
                q.push(val);
                count++;
            }
        }

        return q.size();
    }
};