//Valid paranthesis Leet Code problem easy
#include<bits/stdc++.h>
using namespace std;
bool isValid(string);
class Solution
{
    public:
    stack<char>st;
    bool isValid(string s)
    {
        for(size_t i=0;i<s.length();i++)
        {
            if(s[i]=='['||s[i]=='{'||s[i]=='(')
            st.push(s[i]);
            else
            {
                if(st.empty())
                return false;
                char c=st.top();
                st.pop();
                if((s[i]==')'&&c=='(')||(s[i]==']'&&c=='[')||(s[i]=='}'&&c=='{'))
                {}
                else
                return false;
            }
        }
        if(st.empty())
        return true;
        else
        return false;
    }
};
int main()
{
    string s;
    cin>>s;
    Solution obj;
    if(obj.isValid(s))
    cout<<"Balanced";
    else
    cout<<"unbalanced";
    return 0;
}
