#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    int x1;
    long x2;
    char x3;
    float x4;
    double x5;
    cin >>x1>>x2>>x3>>x4>>x5;
    cout <<x1<<endl<<x2<<endl<<x3<<endl;
    cout <<fixed<<setprecision(3)<<x4<<endl;
    cout <<fixed<<setprecision(6)<<x5;

    //<<x4<<endl<<x5;
    return 0;
}
