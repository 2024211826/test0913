#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<double>a = {3.14, 2.71, 1.618, 0.125};
    for(double x : a){
        cout << x << endl;
    }
    return 0;
}