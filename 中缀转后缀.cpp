#include<bits/stdc++.h>
using namespace std;
int precedence(char c){
	if(c == '+' || c == '-'){
		return 1;
	}
	else if(c == '*' || c == '/'){
		return 2;
	}
	return 0;
}
bool isoperator(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/');
}
int main(){
//	string sline;
//	getline(cin, sline);
//	stringstream ss(sline);
//	vector<char> line;
//	char ch;
//	while(ss >> ch){
//		line.push_back(ch);
//	}
	char ch;
	vector<char> line;
	while(cin >> ch){
		line.push_back(ch);
		if(cin.peek() == '\n'){
			break;
		}
	}//  this input method is more convenient.
	//如果需要中缀转成前缀表达式就反转中缀表达式并且调换括号方向了再进行之后操作就行
//	reverse(line.begin(), line.end()); 
//	for(int i=0; i < line.size(); i++){
//		if(line[i] == '('){
//			line[i] == ')';
//		}
//		else if(line[i] == ')'){
//			line[i] = '(';
//		}
//	} 
	stack<char> express;
	string resu = "";
//	cout<<isdigit('9')<<endl;
	for(int i=0; i < line.size(); i++){
		if(isdigit(line[i])){
			resu += line[i];
		}
		else if(isoperator(line[i])){
			while(!express.empty() && precedence(express.top()) >= precedence(line[i])){
				resu += express.top();
				express.pop();
			}
			express.push(line[i]);
		}
		else if(line[i] == '('){
			express.push(line[i]);
		}
		else if(line[i] == ')'){
			while(express.top() != '('){
				resu += express.top();
				express.pop();
			}
			express.pop();
		}
	}
	while(!express.empty()){
		resu += express.top();
		express.pop();
	}
	cout<<resu<<endl;
}
