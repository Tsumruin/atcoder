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

vector<pair<long long, long long>> get_points(long long x, long long y){
    vector<pair<long long, long long>> res;

    for(long long i=-1; i<=1; i+=2){
        for(long long k=-1; k<=1; k+=2){
            pair<long long, long long> tmp1 = make_pair(x+(2*i), y+(1*k));
            res.push_back(tmp1);
            pair<long long, long long> tmp2 = make_pair(x+(1*i), y+(2*k));
            res.push_back(tmp2);
        }
    }
    return res;
}

int main(){

    long long x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    vector<pair<long long, long long>> points1 = get_points(x1, y1);
    vector<pair<long long, long long>> points2 = get_points(x2, y2);

    int count = 0;
    bool flg = false;
    for(int i=0; i<points1.size(); ++i){
        auto itr = find(points1.begin(), points1.end(), points2[i]);
        size_t index = distance(points1.begin(), itr);
        if(index != points1.size()){
            cout << "Yes" << endl;
            flg = true;
            break;
        }
    }
    
    if(!flg) cout << "No" << endl;

    return 0;
}
