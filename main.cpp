#include <iostream>
using namespace std;
// #include <string>
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

    // int n;
    // cin>>n;
    // int i=0;
    // int m=0;
    // int count =0;
    // while(i<n) {
    //     int x;
    //     cin>>x;
    //     if (x==1) {
    //         count+=1;
    //     }
    //     else {
    //         count =0;
    //     }
    //     if (count>m) {
    //         m=count;
    //     }
    //     i++;
    // }
    // cout<<m;

    // task 5
    // int number;
    // cin >> number;
    // string num;
    // cin>>num;
    // int b=0;
    // int a=0;
    // int l =0;
    // int o =0;
    // int n=0;
    // int i=0;
    // if (number== num.length()) {
    //     while (i<num.length()) {
    //         char x=num[i];
    //         switch (x) {
    //             case 'b': {
    //                 b+=1;
    //             }
    //             break;
    //             case 'a': {
    //                 a+=1;
    //             }
    //             break;
    //             case 'l': {
    //                 l+=1;
    //             }
    //             break;
    //             case 'o': {
    //                 o+=1;
    //             }
    //             break;
    //             case 'n': {
    //                 n+=1;
    //             }
    //             break;
    //             default: {}
    //         }
    //         i++;
    //     }
    //     int result =b;
    //     if (result>a) {
    //         result=a;
    //     }
    //     if (result>o/2) {
    //         result=o;
    //     }
    //     if (result>n) {
    //         result=n;
    //     }
    //     if (result>l/2) {
    //         result=l;
    //     }
    //     cout<<result;
    // }
    // else {
    //     cout<<"NO";
    // }

    //task-7
    // int n;
    // cin >> n;
    // int a=0;
    // int b=0;
    // int m=0;
    // int max=0;
    // int i=0;
    // while (i<n) {
    //     int x;
    //     cin >> x;
    //     a=x;
    //     if (a>b) {
    //         b=a;
    //         m+=1;
    //     }
    //     else {
    //         b=a;
    //         m=1;
    //     }
    //     if (m>max) {
    //         max=m;
    //     }
    //     i++;
    // }
    // cout<<max<<endl;


   // task 8
    //  int numRow;
    //  cin >> numRow;
    //  int r=0;
    //  int init=1;
    // int a=0;
    //  while (r<numRow) {
    //      int c=1;
    //      cout<<1;
    //      while (c<=r) {
    //          a=init *(r-(c-1))/c;
    //          cout <<" "<< a;
    //          init =a;
    //          c++;
    //      }
    //      cout << endl;
    //      r++;
    //  }

    //week 4 lab 2
    //
    // int n;
    // cin >> n;
    // if (n/1000==6) {
    //     n+=3000;
    // }
    // else if (n/100%10==6) {
    //     n+=300;
    // }
    // else if (n/10%10==6) {
    //     n+=30;
    // }
    // else if (n%10==6) {
    //     n+=3;
    // }
    // cout<< n;

    // task 9
// int n;
//     cin >> n;
//     int dir=0;
//     int i=0;
//     int x=0;
//     int y=0;
//     while (i<n) {
//         char let;
//         cin >> let;
//         switch (let) {
//             case 'G': {
//                 if (dir==0) {
//                     y+=1;
//                 }
//                 else if (dir==1) {
//                     x+=1;
//                 }
//                 else if (dir==2) {
//                     y-=1;
//                 }
//                 else {
//                     x-=1;
//                 }
//             }break;
//                 case 'R': {
//                     dir=(dir+1)%4;}break;
//                 case 'L': {
//                 dir=(dir+3)%4;}break;
//                 default : {
//                     cout << "There is no like that movement"<< endl;
//                 }
//         }
//         i++;
//     }
//     if (x==0 && y==0) {
//         cout << "True" << endl;
//     }
//     else if (dir!=0) {
//         cout << "True" << endl;
//     }
//     else {
//         cout << "False" << endl;
//     }


    // weeek task 10
    // int n;
    // cin >> n;
    // int a=0;
    // int b=0;
    // int c=0;
    // if (n>999999999) {
    //     c=n/1000000;
    //     c/=1000;
    //     cout<<c<<".";
    // }
    // if (n>999999) {
    //     b=n/1000000%1000;
    //     cout<<b<<"."<<endl;
    // }
    // if (n>999) {
    //     a = n%1000;
    // }
    //
    //
    // cout << c<<"."<<b<<"."<<a << endl;


    // Task 10
    int n;
    cin >> n;
    if (n>5) {
        int i=5;
        int d=2;
        int c=0;
        int a=2;
        while (i<n) {
            while (d*d<=i) {
                if (i%d==0) {
                    c=0;
                    break;
                }
                c=1;
                d++;
            }
            d=2;
            a+=c;
            i++;
        }
        cout<<a<<endl;
    }
    else if (n==5 || n==4) {
        cout<<2<<endl;
    }
    else if (n==3) {
        cout<<1<<endl;
    }
    else {
        cout<<0<<endl;
    }
}




