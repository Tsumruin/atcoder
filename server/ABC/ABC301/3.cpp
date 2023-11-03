#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
#include <regex>
using namespace std;

int main(){

    string S, T; cin >> S >> T;
    long S_length = S.length();

    long S_at = 0;
    long T_at = 0;
    for(int i=0; i<S_length; ++i){
        if('@' == S.at(i)) S_at++;
        if('@' == T.at(i)) T_at++;
    }

    string model, test;
    long model_at, test_at;
    if(S_at < T_at){model = S; test = T; model_at = S_at; test_at = T_at;}
    else{model = T; test = S; model_at = T_at; test_at = S_at;}

    map<char, long> check;
    for(int i=0; i<S_length; i++){
        char judge = model.at(i);
        if(check.count(judge) == 0){
            check.insert(make_pair(judge, 1));
        }
        else{
            check[judge]++;
        }
    }

    auto begin = check.begin(), end = check.end();
    for (auto iter = begin; iter != end; iter++) {
        // first: key, second: values
        cout << "key = " << iter->first << "\n";
        cout << "value = " << iter->second << "\n";
    }


    bool flag = true;
    for(int i=0; i<S_length; ++i){
        char judge = test.at(i);
        if(check.count(judge) > 0){
            if(check[judge] > 0){
                check[judge]--;
            }
        }
        else{
            if(judge == 'a' || judge == 't' || judge == 'c' || judge == 'o' || judge == 'd' || judge == 'e' || judge == 'r'){
                if(check['@'] > 0){
                    check['@']--;
                    cout << "aaa" << endl;
                }
                else{
                    flag = false;    
                    break;
                }
            }
            else{
                flag = false;
                break;
            }
        }
    }


    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}