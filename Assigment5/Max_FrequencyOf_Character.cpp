// Question link:Consecutive Characters


#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string str;
	cin>>str;
	int max=-100,count=1;

		for(int i=0;i<str.size();i++){
			if(str[i]!=str[i+1]){
				if(count>max){
					max=count;
				}
			count=1;
			}
			else{
				count++;
			}
	}

	if(count>max){
		max=count;

	}
	cout<<max;

	return 0;
}