//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string res = "";
        int n = S.size();
        
        for(int i = 0; i < n;i++ ){
            
            if(S[i] == S[i+1]){
                continue;
            }
            
            else{
                res = res + S[i];
            }
            
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends