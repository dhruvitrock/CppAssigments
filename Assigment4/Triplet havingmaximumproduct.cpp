
// Question link:https://hack.codingblocks.com/app/contests/2505/2140/problem

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

	if((arr[n-1]*arr[n-2]*arr[n-3])>(arr[0]*arr[1]*arr[n-1])){
		cout<<arr[n-1]<<" "<<arr[n-2]<<" "<<arr[n-3];

	}
	else{
		cout<<arr[n-1]<<" "<<arr[1]<<" "<<arr[0];

	}


	return 0;
}