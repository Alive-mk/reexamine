#include<bits/stdc++.h>
using namespace std;
char a[20], b[20];
void f(int ab, int ae, int bb, int be){
	int i;
	if(ab > ae) return;
	cout<<a[ae];//MID
	for(i=bb; b[i]!=a[ae]; i++);
	f(ab, ab+i-bb-1, bb, i-1);//LEFT
	f(ab+i-bb, ae-1, i+1, be);//RIGHT
	
}
int main(){
	while(scanf("%s %s", a, b) != EOF){
//		cout<<a<<b<<endl;
		int ab = 0;
		int ae = strlen(a) - 1;
		int bb = 0;
		int be = strlen(b) - 1;
		f(ab, ae, bb, be);
	}
	return 0;
}
