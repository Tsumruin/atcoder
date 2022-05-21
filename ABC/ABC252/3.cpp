#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    int N; cin >> N;

    vector<vector<int>> ichi(10, vector<int>(10));
    vector<int> count(10);
    for(int n=0; n<10; ++n){
        count.at(n) = 0;
    }

    int num;
    string input;
    int max = 0;
    int max_num;
    int max_id = 0;
    int tmp;

    bool flag = false;

    for(int n=0; n<N; ++n){
        flag = false;
        cin >> input;
        for(int i=0; i<10; ++i){
            num = int(input.at(i) - '0');
            // cout << num << endl;

            ichi.at(num).at(i)++;
            // cout << "here-1" << endl;
            if(1 == ichi.at(num).at(i)){
                // cout << "here0" << endl;
                count.at(num)++;
            }

            if(max <= count.at(num)){
                // cout << "here1" << endl;
                max = count.at(num); 
                max_num = num;
            }
            else if(max == count.at(num)){
                // cout << "here2" << endl;
                flag = true;
            }
        }

        for(int i=0; i<10; ++i){
            if(ichi.at(n).at(i) > 0) tmp = i;
        }
        if(max_id < tmp){
            max_id = tmp;
        }
    }

    cout << endl;



    cout << endl;
    for(int n=0; n<10; n++){
        cout << count.at(n) << endl;;
    }

    cout << max << " " << max_num << " " << max_id << endl;


    int times = (ichi.at(max_num).at(max_id) - 1)*N + max_id;

    cout << times << endl;

    return 0;
}