#include<iostream>
#include<cassert>
using namespace std;
int main(){
    int a = -2147483648;
    assert(a == -a);
    return 0;
}