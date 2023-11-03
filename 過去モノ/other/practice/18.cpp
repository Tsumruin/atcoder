#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string S;
    vector<string> match = {
        "dream",
        "dreamer",
        "erase",
        "eraser"
    };
    bool flag = false;

    for(int i=0; i<4; i++){
        reverse(match[i].begin(), match[i].end());
    }
    
    cin >> S;

    reverse(S.begin(), S.end());

    while(S.size()){
        flag = false;
        for(int i=0; i<4; i++){
            if(match[i] == S.substr(0, match[i].size())){
                S.erase(0, match[i].size());
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}