#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	string str1;
	string str2;
	cin>>str1>>str2;

	int count1[26]={0},result=0;
    
    for(int i=0;str1[i]!='\0';i++)
    
    {
        count1[str1[i]-'a']++;
        
    }
    
    
    for(int i=0;str2[i]!='\0';i++)
    
    {
        count1[str2[i]-'a']--;
        
    }
    
    for(int i=0;i<26;i++){
		
		result=result+abs(count1[i]);

		}
	
	cout<<result<<endl;
	
	}
	return 0;
}