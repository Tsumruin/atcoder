#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
using namespace std;
using LL = long long;

signed main(){
	int N;	cin >> N;

	vector<int> X(N), Y(N);
	for(int i = 0; i < N; i++) cin >> X[i] >> Y[i];
	string S; cin >> S;

	map<int, int> L, R;	
	for(int i = 0; i < N; i++) {
		if(S[i] == 'L') {
			if(!L.count(Y[i])) L[Y[i]] = X[i];
			else L[Y[i]] = max(L[Y[i]], X[i]);
		}
		else{
			if(!R.count(Y[i])) R[Y[i]] = X[i];
			else R[Y[i]] = min(R[Y[i]], X[i]);
		}
	}

	for(auto v : L){
		int y = v.first, tl = v.second;
		if(!R.count(y) || R[y] > tl) continue;
		cout << "Yes" << endl;;
		return 0;  
	}
	cout << "No" << endl;;
}