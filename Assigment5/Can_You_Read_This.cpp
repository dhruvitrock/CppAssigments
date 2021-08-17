// Questions:https://hack.codingblocks.com/app/contests/2523/66/problem


#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string str;
	cin>>str;
		for(int i=0;i<str.size();i++){

			if(str[i]>='A' && str[i]<='Z'){
				cout<<endl<<str[i];
			}
			else{
				cout<<str[i];

			}

	}
	return 0;
}