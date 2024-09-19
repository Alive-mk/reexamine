#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
//	cin >> str;
	while(getline(cin, str)){// multiple case input
		vector<string> lst;
		string tmp = "";
		for(int i=0; i < str.size(); i++){
			tmp += str[i];
			for(int j=i+1; j < str.size(); j++){
				if(str[j]==str[i]){
					tmp += str[j];
					i++;
				}
				else{
					lst.push_back(tmp);
					tmp = "";
					break;
				}
			}
		}
		lst.push_back(tmp);
		sort(lst.begin(), lst.end());//If you need to use descending order greater<Type>() 
		for(int i=0; i < lst.size(); i++){
			for(int j=i+1; j < lst.size(); j++){
				if(lst[j]==lst[i]){
					lst.erase(lst.begin()+i);
				}
			}
		}
		for(int i=0; i < lst.size(); i++){
			cout<< lst[i] <<endl;
		}
	}
	return 0;
}
