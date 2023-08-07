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


void printVector(const vector<int>& vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

void print2ndVector(const vector<vector<bool>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    int N; cin >> N;

    vector<int> A(N);
    for(int i=0; i<N; ++i){
        cin >> A.at(i);
    }

    return 0;
}




#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <deque>
#include <unordered_set>
using namespace std;

int main(){
    int a, b, c;
    int i, k, j;
    int N, M;
    double da;
    int tmp;

    cin >> a >> b >> c;

    cout << "a" << "b";
    cout << "a" << 100 << "b";

    // 浮動小数点の精度(小数点以下Nまで表示)
    cout << fixed << setprecision(N) << da << endl; 

    for(int i = 0; i < N; i++) {
    }

    // ベクトル
    vector<int> vec;
    vec = { 10, 20, 30 }; 
    vec.size();
    vec.at(i);

    for(int i=0; i<N; i++){
        cin >> vec.at(i);
    }

    // 重複を許さない
    unordered_set<int> s; 

    for(auto x : st) {
        std::cout << x << "\n";     // 要素を順に表示
    }

    // ソート
    sort(vec.begin(), vec.end());
    sort(N.begin(), N.end(), greater<int>());

    // int型の2次元配列(3×4要素の)の宣言
    vector<vector<int>> data(3, vector<int>(4));
    data.at(i).at(j);


    //bit全探索
    for (int bit = 0; bit < (1 << digit); ++bit) {
        // bit の表す集合を求める
        long long l = 0, r = 0;

        for (int i = 0; i < digit; ++i){
            if (bit & (1 << i)){
                l = 10 * l + N.at(i) - '0';
            }
            else{
                r = 10 * r + N.at(i) - '0';
            }
        }

        maximum = max(maximum, l * r);

    }

    // N × (3 × 3)要素の配列を宣言
    vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3)));

    // 文字列
    string str = "Hello"; // ダブルコーテーション
    char c = str.at(i);
    char c = 'h'; // シングルコーテーション
    cout << "Hello"s.size() << endl;

    if("ABC" < "XZ"){
        cout << true << endl; // 0~9 > A~Z > a~z
    }

    str += ", AtCoder!";
    cout << str << endl; // Hello, AtCoder!

    string s, t;
    getline(cin, s); // 変数sで入力を一行受け取る
    getline(cin, t); // 変数tで入力を一行受け取る
    
    cout << "一行目 " << s << endl;
    cout << "二行目 " << t << endl;


    set<pair<long long, long long>> used;

    long long nowX = 0;
    long long nowY = 0;
    used.insert({nowX, nowY});

    auto result = used.insert({nowX, nowY});

    if(!result.second){
        cout << "重複！" << endl;
    }   
}

// a + b がオーバーフローするならtrueを返す
template <class T> bool overflow_if_add(T a, T b) {
    return (std::numeric_limits<T>::max() - a) < b;
}

// a * b がオーバーフローするならtrueを返す
template <class T> bool overflow_if_mul(T a, T b) {
    return (std::numeric_limits<T>::max() / a) < b;
}