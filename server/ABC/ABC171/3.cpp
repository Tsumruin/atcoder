#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#define EPS 0.5
using namespace std;

char itoc(int n);

int main(){

    unsigned long long N; cin >> N;
    unsigned long long len;

    unsigned long long i = 0;
    vector<unsigned long long> div;
    div.push_back(26);
    while(1){
        if(N <= div.at(i)){
            len = i+1;
            break;
        }
        div.push_back(div.at(i) + pow(26, i+2) + EPS);
        i++;
    }

    // 余り格納
    vector<char> md(div.size());

    unsigned long long j = 0;
    for(int i=0; i<len; i++){
        if(N < 26){
            md.at(i) = itoc(N);
        }
        else if(0 == N % 26){
            md.at(i) = itoc(0);
            N /= 26;
            N--;
        }
        else{
            md.at(i) = itoc(N % 26);
            N /= 26;
        }
    }

    for(int i=md.size()-1; i>=0; i--){
        cout << md.at(i);
    }



    return 0;
}

char itoc(int n){
    switch(n){
        case 1: return 'a';
        case 2: return 'b';
        case 3: return 'c';
        case 4: return 'd';
        case 5: return 'e';
        case 6: return 'f';
        case 7: return 'g';
        case 8: return 'h';
        case 9: return 'i';
        case 10: return 'j';
        case 11: return 'k';
        case 12: return 'l';
        case 13: return 'm';
        case 14: return 'n';
        case 15: return 'o';
        case 16: return 'p';
        case 17: return 'q';
        case 18: return 'r';
        case 19: return 's';
        case 20: return 't';
        case 21: return 'u';
        case 22: return 'v';
        case 23: return 'w';
        case 24: return 'x';
        case 25: return 'y';
        case 0: return 'z';
        default : return 'A';
    }
}