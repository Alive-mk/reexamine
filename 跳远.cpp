#include<bits/stdc++.h>
using namespace std;
bool Jump(vector<int> nums, vector<int>& path){
	int n = nums.size();
	int current = 0;
	path.push_back(1);
	int fartest = 0;
	while(current < n-1){
		fartest = max(fartest, current + nums[current]);
		if(fartest >= n-1){
			path.push_back(n);
			return true;
		}
		if(fartest == current){
			return false;
		}
		int next = current;
		for(int i=current+1; i < n-1 && i <= fartest; i++){
			if(i+nums[i] > next+nums[next]){
				next = i;
			}
		}
		current = next;
		path.push_back(current+1);
	}
	return true;
}
int main(){
	string line;
	getline(cin, line);
	stringstream ss(line);
	int num;
	vector<int> nums;
	while(ss >> num){
		nums.push_back(num);
	}
	vector<int> path;
//	bool Jump(nums, path)
	if(Jump(nums, path)){
		for(int i=0; i < path.size(); i++){
			cout<<path[i]<<" ";
		}
	} 
	else{
		cout<<"None"<<endl;
	}
} 
