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

    cout<<max(arr[0]*arr[1]*arr[n-1],arr[n-3]*arr[n-2]*arr[n-1]);
    
    return 0;

}