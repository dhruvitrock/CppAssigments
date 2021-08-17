#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string str;
	cin>>str;
int arr[26]={0};
int len=str.size();

for(int i=0;i<len;i++){
	arr[str[i]-'a']++;

}

int max=-100;
char c;

for(int i=0;i<len;i++){
	if(arr[str[i]-'a']>max){
		max=arr[str[i]-'a'];
		c=str[i];



	}

}
cout<<c;

	return 0;
}