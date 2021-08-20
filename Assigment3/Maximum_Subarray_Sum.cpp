#include<iostream>
#include<algorithm>
using namespace std;

int main () {
	int n;
	cin>>n;
	
	int arr[n];
int ms=0,cs=0;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){

		cs=cs+arr[i];
		if(cs<0){
			cs=0;

		}
		ms=max(ms,cs);

	}
	cout<<ms;
	
	return 0;
}