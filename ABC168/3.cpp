#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath> 
using namespace std;
#define PI 3.141592653589793238

int main(void){

    int A, B, H, M;
    cin >> A >> B >> H >> M;

    int minute = 60 * H + M;

    double angleA = minute / 2.0;
    double angleB = minute * 6.0;   
    double angle = fmod(abs(angleA - angleB), 360);

    if(angle >= 180){
        angle = 360 - angle;
    }

    double rad = angle * PI / 180.0;

    double C;
    C = A * A + B * B - 2.0 * A * B * cos(rad);

    cout << setprecision(20) << sqrt(C) << endl;

    return 0;
}