// Question Link:https://hack.codingblocks.com/app/contests/2477/1077/problem


#include<bits/stdc++.h>

using namespace std;
int kadane(int arr[],int num){

int max1=INT_MIN,sum=0;

for(int i=0;i<num;i++){

	sum=sum+arr[i];
	max1=max(max1,sum);
	if(sum<0){
		sum=0;

	}

}
return max1;

}


int minsum(int arr[],int num){
	int min1=INT_MAX,sum=0;


   for(int i=0;i<num;i++){

	   sum+=arr[i];
	   
	   min1=min(sum,min1);
	   if(sum>0){
		   sum=0;

	   }

   }
   return min1;

}
int main() {
	
	int n;
	cin>>n;
	while(n--){

		int num;
		cin>>num;
		int arr[num];

		for(int i=0;i<num;i++){
			cin>>arr[i];

		}
       int sum=0; 
		for(int i=0;i<num;i++){
			sum+=arr[i];

		}

			int fun1=kadane(arr,num);
			int fun2=minsum(arr,num);
			sum=sum-fun2;

			cout<<max(fun1,sum)<<endl;

			

	}

	return 0;
}