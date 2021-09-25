#include<bits/stdc++.h>
using namespace std;

string piConvert(string str){

	if(str.length()<=1){
		return str;

	}
	if(str.substr(0,2)=="pi"){
		return "3.14"+piConvert(str.substr(2));

	}
	else{
		return str[0]+piConvert(str.substr(1));

	}
}
int main() {
	int n;
	cin>>n;
	while(n--){

	
	string str;
	cin>>str;


cout<<piConvert(str)<<endl;
	}
	return 0;
}