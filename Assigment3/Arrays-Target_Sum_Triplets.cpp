#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];

}
int sum;
cin>>sum;

sort(arr,arr+n);

for(int i=0;i<n-3;i++){
	int le=i+1;
	int end=n-1;

while(le<end){

if(arr[i]+arr[le]+arr[end]==sum){
		cout<<arr[i]<<", "<<arr[le]<<" and "<<arr[end]<<endl;
		le++;
		end--;
		

	}
	if(arr[i]+arr[le]+arr[end]>sum){
		end--;


	}
	if(arr[i]+arr[le]+arr[end]<sum){
		le++;


	}
}
		
}
	return 0;

}