#include<bits/stdc++.h>
using namespace std;
int bysearch(vector<int> a, int num, int &cnt){
	int left = 0;
	int right = a.size() - 1;
	while(left <= right){
		cnt++;
		if(left == right){
			if(a[left] == num || a[right] == num){
				return left;
			}
			else{
				return -1;
			}
		}
		int mid = (right + left) / 2;
		if(a[mid] == num){
			return mid;
		}
		else if(a[mid] < num){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
}
//int bysearch(vector<int> a, int num, int &cnt){
//	int left = 0;
//	int right = a.size() - 1;
//	while(left <= right){
//		cnt++;
//		if(left == right){
//			if(a[left] == num){
//				return left;
//			}
//			else{
//				return -1;
//			}
//		}
//		int mid = left + (right - left)/2;
//		if(a[mid] > num){
//			right = mid - 1;
//		}
//		else if(a[mid] < num){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//}

int main(){
	int tmp;
	int cnt=0;
	vector<int> numbers;
	while(1){
		scanf("%d", &tmp);
		numbers.push_back(tmp);
		if(getchar() == '\n'){//一种比较好的输入办法  a good way to input 
			break;
		}
	}
	int num;
	cin>> num;
	int pos = bysearch(numbers, num, cnt);
	cout<<pos<<endl;
}
