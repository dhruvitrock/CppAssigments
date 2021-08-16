// Questions:https://hack.codingblocks.com/app/contests/2523/2633/problem


#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string str1,str2;
	cin>>str1>>str2;

	for(int i=0;i<str1.size()-1;i++){
		


		if(str1[i]!=str2[i]){

	  char temp=str1[i];
		str1[i]=str1[i+1];
		str1[i+1]=temp;
		

		}

	}
	if(str1==str2){
		cout<<"true";

	}
	else{
cout<<"false";
	}
	

		

	
	return 0;
}