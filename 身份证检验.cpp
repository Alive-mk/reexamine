#include<bits/stdc++.h>
using namespace std;
int main(){
	string id;
	cin >> id;// the input is a string. 
//	cout<<id[0]<<endl;
	int w[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//	cout<< w[0]<<endl;
	int sum = 0;
	for(int i=0; i<17; i++){
		sum += (id[i]-'0') * w[i];
	}
//	cout<<sum<<endl;
	int Y = sum % 11;
	char checks[] = {'1','0','X','9','8','7','6','5','4','3','2'};// braces are used to assign values.
//	cout<<checks[0]<<endl;
	char check = checks[Y];
	if(id[17] == check){
		cout<<id<<" 正确"<<endl;
	}
	else{
		id[17] = check;
		cout<<"应为："<<id<<endl;
	}
	return 0;
}
