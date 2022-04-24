#include <iostream>
using namespace std;

int main(){

    int N; cin >> N;

    cout << N << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
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

    // ソート
    sort(vec.begin(), vec.end());

    // int型の2次元配列(3×4要素の)の宣言
    vector<vector<int>> data(3, vector<int>(4));
    data.at(i).at(j);

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
}