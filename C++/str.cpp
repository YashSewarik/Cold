//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    {       
        string o="";
        vector<vector<char>> out;
        vector<char> str;
        // str.push_back(s[0]);
        for(int i=0;i<s.size();i++){
            if(s[i+1]=='.'){
                str.push_back(s[i]);
                out.push_back(str);
                str.clear();
                str.push_back('.');
                out.push_back(str);
                str.clear();
                i+=1;
            }
            else{
                str.push_back(s[i]);
            }
        }
        out.push_back(str);
        for(int i=out.size()-1;i>=0;i--){
            for(char a:out[i]){
                o+=a;
            }
        }
        return o;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t=1;
    //cin >> t;
    while (t--) 
    {
        string s="i.like.this";
        //cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends