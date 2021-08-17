#include<bits/stdc++.h>
using namespace std;

int main() {
	
	string str;
	cin>>str;
	int max1=-100,cs=0;

		for(int i=0;i<str.size();i++){

			if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u'){
				cs++;

			}
			else{
				max1=max(max1,cs);
				cs=0;

			}

	}

	cout<<max(max1,cs);
	


	return 0;
}