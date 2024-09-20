#include<bits/stdc++.h>
using namespace std;
int gcd( int a,  int b){
	int t;
	if(a < b){
		t = a;
		a = b;
		b = t;
	}
	while(t = a%b){
		a = b;
		b = t;
	}
	return b;
}
int main(){
	string input;
	getline(cin, input);
	stringstream ss(input);
	vector<int> numbers;
	string tmp;
	while(getline(ss, tmp, ',')){
		stringstream s(tmp);
		int a;
		s >> a;
		numbers.push_back(a);
	}
	cout<<gcd(numbers[0], numbers[1])<<endl;
	return 0;
} 
