class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        if(a.first<b.first)return true;
        else if(a.first==b.first){
            return a.second<b.second;
        }
        else return false;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        int row=mat.size();
        for(int i=0;i<row;i++)
        {
            int s=accumulate(begin(mat[i]),end(mat[i]),0);
            v.push_back({s,i});
        }
        sort(begin(v),end(v),cmp);
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            res.push_back(v[i].second);
        }
        return res;
        
        
        
    
    }
        
};
