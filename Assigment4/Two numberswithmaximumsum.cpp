// Question link:https://hack.codingblocks.com/app/contests/2505/2139/problem

#include<bits/stdc++.h>
using namespace std;
int main () {
		 int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
	sort(arr,arr+n);

	for(int i=n-1;i>=0;i=i-2){

		cout<<arr[i];

	}
	cout<<" ";
	
	for(int i=n-2;i>=0;i=i-2){

		cout<<arr[i];
		
	}
	return 0;
}