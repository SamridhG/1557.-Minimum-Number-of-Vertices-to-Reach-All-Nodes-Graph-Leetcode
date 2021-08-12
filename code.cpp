class Solution {
public:
    
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>res;
     
         vector<int>A(n,0);
         for(int i=0;i<edges.size();i++)
        {
            A[edges[i][1]]--;
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]==0)res.push_back(i);
        }
        
        return res;
    }
};
