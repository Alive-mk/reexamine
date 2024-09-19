#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int tmp;
	cin >> n;
	cin.ignore();
	vector<int> w;
	string token;
	string line;
	getline(cin, line);
	stringstream ss(line);
	cout<< ss.str()<<endl;
	while(getline(ss, token, ',')){// pay attention to chainese and english commas 
		cout<< token<<endl;
		size_t start = token.find_first_not_of(" \t");
		size_t end = token.find_last_not_of(" \t");
		if(start != string::npos && end != string::npos){
			token = token.substr(start, end-start+1);
		}
		if(!token.empty()){
			int number;
			stringstream s1(token);//the operation of coverting a string to an integer
			s1 >> number;
			w.push_back(number);
		}
	}
//	for(int i=0; i < n; i++){
//		int tmp;
//		scanf("%d,", &tmp);
//		w.push_back(tmp);//can not be assigned directly :no w[i] = tmp
//	}
	sort(w.begin(), w.end());
	int sum=0;// the shortes path length is the sum of weights of all non-leaf nodes
	for(int i=0; i < n-1; i++){// or while(w.size()!=1)
		sum += (w[0] + w[1]);
		w.push_back(w[0]+w[1]);
		w.erase(w.begin());
		w.erase(w.begin());
		sort(w.begin(), w.end());
	}
	cout<< sum <<endl;
	return 0;
}
