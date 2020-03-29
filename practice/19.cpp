#include <iostream>
#include <vector>
using namespace std;

struct coor{
    int x;
    int y;
};

int main(){
    int N;
    cin >> N;

    vector<int> t(N);
    vector<coor> el(N);
    coor prev_el;
    int prev_t = 0;
    int dist, tmp;
    bool flag = true;

    prev_el.x = 0;
    prev_el.y = 0;

    for(int i=0; i<N; i++){
        cin >> t[i] >> el[i].x >> el[i].y;
    }

    for(int i=0; i<N; i++){
        dist = abs(el[i].x - prev_el.x) + abs(el[i].y - prev_el.y);
        tmp = dist - ( t[i] - prev_t );
        if(tmp > 0 || 0 != tmp % 2){
            flag = false;
            break;
        }
        prev_el = el[i];
        prev_t = t[i];
    }

    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}