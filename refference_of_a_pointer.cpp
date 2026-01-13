#include<bits/stdc++.h>
using namespace std;

void fun(int* &p)
{
    int y = 200;
    p = &y;
    cout << "In fun func:" << &p << endl;
};

int main(){
    int x = 10;
    int* p = &x;
    fun(p);
    cout << "In main func:" << &p << endl;
    // cout << *p << endl;
    return 0;
}