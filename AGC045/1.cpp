#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<unsigned long long int> x, vector<unsigned long long int> y){
    for(int i=0; i<(int)x.size(); i++){
        for(int k=0; k<(int)y.size(); k++){
            if(x.at(i) == y.at(k)){
                return true;
            }
        }
    }
    return false;
}

int main(void){

    int T; cin >> T;
    unsigned long long int tmp = 0;

    vector<int> result;
    
    for(int i=0; i<T; i++){

        int N; cin >> N;
        vector<unsigned long long int> A(N);
        for(int k=0; k<N; k++){
            cin >> A.at(k);
        }
        string S; cin >> S;

        vector<unsigned long long int> ex0;
        vector<unsigned long long int> ex1;
        vector<unsigned long long int> A0;
        vector<unsigned long long int> A1;

        for(int k=0; k<(int)S.size(); k++){
            if(S.at(k) == '0'){
                A0.push_back(A.at(k));
            }
            else{
                A1.push_back(A.at(k));
            }
        }

        if(A1.size() == 0){
            result.push_back(0);
            continue;
        }
        else if(A0.size() == 0){
            result.push_back(1);
            continue;
        }

        for(int k=0; k<(int)A0.size(); k++){
            ex0.push_back(A0.at(k));
        }
        for(int k=0; k<(int)A1.size(); k++){
            ex1.push_back(A1.at(k));
        }

        if(check(ex0, ex1)){
            result.push_back(0);
            continue;
        }

        int m=(int)A0.size();

        for(int k=0; k<m; k++){
            for(int j=k+1; j<m; j++){
                tmp = ex0.at(k) ^ ex0.at(j);
                for(int l=0; l<(int)ex0.size(); l++){
                    if(tmp != ex0.at(l)){
                        ex0.push_back(tmp);
                        break;
                    }
                }
            }
        }
        m=(int)A1.size();
        for(int k=0; k<m; k++){
            for(int j=k+1; j<m; j++){
                tmp = ex1.at(k) ^ ex1.at(j);
                for(int l=0; l<(int)ex1.size(); l++){
                    if(tmp != ex1.at(l)){
                        ex1.push_back(tmp);
                        break;
                    }
                }
            }
        }
        if(check(ex0, ex1)){
            result.push_back(0);
            continue;
        }
        else{
            result.push_back(1);
        }

    }

    for(int i=0; i<(int)result.size(); i++){
        cout << result.at(i) << endl;
    }

    return 0;
}