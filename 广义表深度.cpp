#include<bits/stdc++.h>
using namespace std;
int main(){
	string line;
	cin >> line;
	int count = 0;
	int resu = 0;
//	cout<< line.size()<<endl;
	for(int i=0; i < line.size(); i++){
		if(line[i] == '('){
			count++;
		}
	}
	cout<<count<<endl;
}
