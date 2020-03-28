#include <iostream>
using namespace std;

int main()
{
    int N, Y;
    cin >> N >> Y;

    int money, tmp;

    for(int i=0; i<=N; i++){
        money = Y - 10000 * i;
        for(int k = 0; k<=N-i; k++){
            tmp = money -  5000 * k;
            int j = N - i - k;
            if(1000 * j == tmp){
                cout << i << " " << k << " " << j << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}