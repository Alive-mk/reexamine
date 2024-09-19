#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	string pre = "";
	getline(cin, str);
	vector<string> tokens;
	string token;
	stringstream ss(str);
	while(getline(ss, token, ' ')){
		tokens.push_back(token);
//		cout<<token<<endl;
	}
//	cout<<tokens[0][0]<<endl;
	for(int i=0; i < tokens[0].size(); i++){
//		cout<<tokens[0]<<endl;
//		cout<<"i="<<i<<endl;
//		cout<<"size:"<<tokens[0].size()<<endl;
		bool flag = true;
		for(int j=1; j < tokens.size(); j++){
//			cout<<"j="<<j<<endl;
//			cout<<tokens[j]<<endl;
//			cout<<tokens[j].size()<<endl;
			if(tokens[j].size()<i){
				i = tokens[0].size();
				break;
				flag = false;
			}
			if(tokens[j][i] != tokens[0][i]){
				flag = false;
				break;
			}
		}
//		cout<<flag<<endl;
		if(flag){
			pre += tokens[0][i];
		}
		else{
			break;
		}
	}
	if(pre.empty()){
		cout<<"None"<<endl; 
	}
	else{
		cout<<pre<<endl;
	}
}
