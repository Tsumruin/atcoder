#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, tmp;
    int count = 1;
    cin >> N;
    
    vector<int> num;

    for(int i=0; i<N; i++)
    {
        cin >> tmp;
        num.emplace_back(tmp);
    }

    sort(num.begin(), num.end());

    for(int i=N-1; i>0; i--)
    {
        if(num[i] > num[i-1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
