#include<bits/stdc++.h>
using namespace std;
bool compare(const string& a, const string& b){
	string lowerA = a, lowerB = b;
	transform(lowerA.begin(), lowerA.end(), lowerA.begin(), ::tolower);
	transform(lowerB.begin(), lowerB.end(), lowerB.begin(), ::tolower);
	return lowerA < lowerB;
}
int main(){
	vector<string> words;
	string word;
	while(cin >> word){
		words.push_back(word);
		if(cin.peek() == '\n'){
			break;
		}
	}
	sort(words.begin(), words.end(), compare);
	for(int i=0; i < words.size(); i++){
		cout<<words[i]<<" ";
	}
	return 0;
}
