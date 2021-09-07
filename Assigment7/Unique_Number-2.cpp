#include<iostream>
using namespace std;

int main() {
	 int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

	int x=0;

	for(int i=0;i<n;i++){

		x=x^arr[i];

	}

int elem1=0,elem2=0;

	int rsbm=x&(-x);

	for(int i=0;i<n;i++){

		if(rsbm & arr[i]){

			elem1=elem1^arr[i];

		}
		else{
			elem2=elem2^arr[i];

		}
	}

	if(elem1>elem2){
		cout<<elem2<<" "<<elem1;

	}
	else{
		cout<<elem1<<" "<<elem2;
	}

return 0;
}