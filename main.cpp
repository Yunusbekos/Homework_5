#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i=0;
    int count=0;
    int x=5;
    int a = 0;
    if (0<=n && n<5) {
        cout<<0;
    }
    while (x<=n) {
            a=n/x;
            x*=5;
        count=count+a;
    }
    cout << count<< endl;
    return 0;
}