#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N; cin >> N;
    int count = 0;
    vector<int> a(N);

    for(int i=0; i<N; i++){
        cin >> a.at(i);
        if(1 == a.at(i)%2 && 0 == i%2){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
