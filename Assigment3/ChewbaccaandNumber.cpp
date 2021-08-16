#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin>>str;

	int i=0;

	if(str[i]=='9'){
		i++;

	}

	while(str[i]!='\0'){
		int digits=str[i]-'0';
		if(digits>=5){
			digits=9-digits;

		}
		str[i]=digits+'0';
		i++;

	}

	cout<<str;


	
	


	return 0;
}