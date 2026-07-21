class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string ans="";
        vector<string> res;
        int open=0;
        int close =0;
        para(open, close, n, ans, res);
        return res;
        
    }
    void para(int open, int close, int n, string &ans, vector<string>& res){
        if(close==n){
            res.push_back(ans);
            return;
        }
        if(open<n){
            ans+='(';
            para(open+1, close, n, ans, res);
            ans.pop_back();
        }
        if(open>close){
            ans+=')';
            para(open, close+1, n, ans, res);
            ans.pop_back();
        }
    }
};