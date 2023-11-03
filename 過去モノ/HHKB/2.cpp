#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int H, W; cin >> H >> W;
    int count = 0;

    vector<vector<char>> data(H, vector<char>(W));

    for(int i=0; i<H; i++){
        for(int k=0; k<W; k++){
            cin >> data.at(i).at(k);
        }
    }

    for(int i=0; i<H; i++){
        for(int k=0; k<W; k++){
            if(k<W-1){
                if(data.at(i).at(k) == '.' && data.at(i).at(k+1) == '.'){
                    count++;
                }
            }
            if(i<H-1){
                if(data.at(i).at(k) == '.' && data.at(i+1).at(k) == '.'){
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}