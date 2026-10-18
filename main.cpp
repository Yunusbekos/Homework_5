#include <iostream>
using namespace std;
int main() {

    //Task 6
    /*int n;
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
    return 0;*/

    //task 3

    int n;
    cin>>n;
    int i=0;
    int m=0;
    int count =0;
    while(i<n) {
        int x;
        cin>>x;
        if (x==1) {
            count+=1;
        }
        else {
            count =0;
        }
        if (count>m) {
            m=count;
        }
        i++;
    }
    cout<<m;
}