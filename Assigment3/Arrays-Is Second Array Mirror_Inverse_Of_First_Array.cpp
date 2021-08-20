#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr1[n];
	int arr2[n];
	
	for(int i=0;i<n;i++){
		cin>>arr1[i];

	}
		for(int i=0;i<n;i++){
		cin>>arr2[i];
		
	}

	int ans[n];

	for(int i=0;i<n;i++){
      ans[arr2[i]]=i;

	}
	int c=0;
	
	for(int i=0;i<n;i++){
		
		if(arr1[i]!=ans[i]){
			cout<<"false";

			c=1;
			break;

		}
	}
	if(c==0){
		cout<<"true";

	}
	return 0;
}