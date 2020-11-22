#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int N; cin >> N;
    unsigned long long tmp;
    vector<unsigned long long> num;

    for(int i=0; i<N; i++){
        cin >> tmp;
        if(0 == tmp){
            cout << 0 << endl;
            exit(0);
        }
        num.push_back(tmp);
    }

    unsigned long long prod = 1;

    for(int i=0; i<N; i++){
        if(num[i] > 1000000000000000000 / prod){
            cout << -1 << endl;
            exit(0);
        }
        else{
            prod *= num[i];
        }
    }


    cout << prod << endl;

    return 0;
}
