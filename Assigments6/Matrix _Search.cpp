#include<bits/stdc++.h>
using namespace std;

int main () {
	int n,m;
	cin>>n>>m;
	int arr[n][m];

for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){

			cin>>arr[i][j];

		}
	}
int x;
cin>>x;

int i=0,j=m-1;
   
   while(i<n && j>=0){

	   if(arr[i][j]==x){
		   cout<<1;
		   return 0;

	   }
	   if(arr[i][j]>x){
		   j--;

	   }
	   if(arr[i][j]<x){
		   i++;

	   }
   }
	
	cout<<0;
	
	return 0;
}