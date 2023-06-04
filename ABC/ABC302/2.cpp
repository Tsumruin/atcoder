#include <iostream>
#include <vector>
#include <iomanip> 
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int H, W;

bool find_target(char target, int i, int k, vector<vector<char>>& S){
    if(target == S[i][k]){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    cin >> H >> W;
    
    vector<vector<char>> S(H+2, vector<char>(W+2));
    for(int i=0; i<H; ++i){
        for(int k=0; k<W; ++k){
            cin >> S[i][k];
        }
    }

    int res_i=-1, res_k=-1, res_dir=-1;
    for(int i=0; i<H; ++i){
        for(int k=0; k<W; ++k){
            char start = S[i][k];
            if('s' == start){
                if(k <= W-5){
                    if(find_target('n', i, k+1, S) && find_target('u', i, k+2, S) && find_target('k', i, k+3, S) && find_target('e', i, k+4, S)){
                        res_i = i;
                        res_k = k;
                        res_dir = 1;
                        break;
                    }
                    else if(i >= 4){
                        if(find_target('n', i-1, k+1, S) && find_target('u', i-2, k+2, S) && find_target('k', i-3, k+3, S) && find_target('e', i-4, k+4, S)){
                            res_i = i;
                            res_k = k;
                            res_dir = 4;
                            break;
                        }
                    }
                    else if(i <= H-5){
                        if(find_target('n', i+1, k+1, S) && find_target('u', i+2, k+2, S) && find_target('k', i+3, k+3, S) && find_target('e', i+4, k+4, S)){
                            res_i = i;
                            res_k = k;
                            res_dir = 5;
                            break;
                        }
                    }
                }
                else if(i <= H-5){
                    if(find_target('n', i+1, k, S) && find_target('u', i+2, k, S) && find_target('k', i+3, k, S) && find_target('e', i+4, k, S)){
                        res_i = i;
                        res_k = k;
                        res_dir = 2;
                        break;
                    }
                }
                else if(k >= 4){
                    if(find_target('n', i, k-1, S) && find_target('u', i, k-2, S) && find_target('k', i, k-3, S) && find_target('e', i, k-4, S)){
                        res_i = i;
                        res_k = k;
                        res_dir = 3;
                        break;
                    }
                    else if(i <= H-5){
                        if(find_target('n', i+1, k-1, S) && find_target('u', i+2, k-2, S) && find_target('k', i+3, k-3, S) && find_target('e', i+4, k-4, S)){
                            res_i = i;
                            res_k = k;
                            res_dir = 6;
                            break;
                        }
                    }
                    else if(i >= 4){
                        if(find_target('n', i-1, k-1, S) && find_target('u', i-2, k-2, S) && find_target('k', i-3, k-3, S) && find_target('e', i-4, k-4, S)){
                            res_i = i;
                            res_k = k;
                            res_dir = 7;
                            break;
                        }
                    }
                }
                else if(i >= 4){
                    if(find_target('n', i-1, k, S) && find_target('u', i-2, k, S) && find_target('k', i-3, k, S) && find_target('e', i-4, k, S)){
                        res_i = i;
                        res_k = k;
                        res_dir = 0;
                        break;
                    }
                }
            }
            if(res_i > 0) break;
        }
    }

    res_i++; res_k++;
    for(int i=0; i<5; ++i){
        cout << res_i << " " << res_k << endl;
        if(0 == res_dir){
            res_i--;
        }
        else if(1 == res_dir){
            res_k++;
        }
        else if(2 == res_dir){
            res_i++;
        }
        else if(3 == res_dir){
            res_k--;
        }
        else if(4 == res_dir){
            res_i--;
            res_k++;
        }
        else if(5 == res_dir){
            res_i++;
            res_k++;
        }
        else if(6 == res_dir){
            res_i++;
            res_k--;
        }
        else if(7 == res_dir){
            res_i--;
            res_k--;
        }

    }
    return 0;
    
}