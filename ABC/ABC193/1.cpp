#include <iostream>
using namespace std;

int main(){

    int A, B; cin >> A >> B;

    cout << 100 * (1 - double(B)/double(A)) << endl;

    return 0;
}
