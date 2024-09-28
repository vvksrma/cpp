#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& vec, int sz, int x){
	for(int i = 0; i < sz; i++){
		if (vec[i] == x){
			return i;
		}
	}
	return 0;
}

void revector(vector<int>& vec, int sz){
	int start = 0;
	int end = sz-1;

	while(start < end){
		swap(vec[start], vec[end]);
		start++;
		end--;
	}

}

int subarrysum(vector<int>& vec){
	int currSum = 0;
	int maxSum = INT_MIN;

	for(int val : vec){
		currSum += val;
		maxSum = max(currSum, maxSum);
		if(currSum < 0){
			currSum = 0;
		}
	}
	return maxSum;
}

vector<int> pairsum(vector<int>& vec, int target){
	vector<int> ans;
	int n = vec.size();
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(vec[i] + vec[j] == target){
				ans.push_back(i);
				ans.push_back(j);
			}
		}
	}
	return ans;
}

int main(){
	vector<int> vec = {2,7,11,15};
	int target = 17;
	vector<int> ans = pairsum(vec, target);
	cout << ans[0] << " , " << ans[1] << endl;
	return 0;	
}
