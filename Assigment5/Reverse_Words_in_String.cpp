#include <bits/stdc++.h>
using namespace std;
void reverse(string s)
{
     string tmp = "";
        s += ' ';
        stack<string> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' ')
                tmp += s[i];
            if(tmp.length() > 0 && s[i] == ' '){
                st.push(tmp);
                tmp = "";
            }            
        }
        
        string ans = "";
        while(!st.empty()){
            tmp = st.top();
            st.pop();
            
            ans += tmp;
            ans += ' ';
        }
        ans = ans.substr(0, ans.length()-1);
		cout<<ans;
		}
 
int main () {

string s;
getline(cin,s);
reverse(s);
	return 0;
}