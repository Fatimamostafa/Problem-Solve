#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main() {

    int ng, nl;
    cin>>ng;
    int ag[ng];

    for(int i = 0; i<ng; i++) {
        cin>>ag[i];
    }

    cin>>nl;
    int al[nl];

    for(int i = 0; i<nl; i++) {
        cin>>al[i];
    }

    for(int i = 0; i<nl; i++) {
        //    cout<<"TARGET"<<al[i]<<endl;
        int minBound = lower_bound(ag, ag+ng, al[i]) - ag - 1;
     //   cout<<"MIN"<<minBound<<endl;
        int maxBound = upper_bound(ag, ag+ng, al[i]) - ag;
     //   cout<<"MAX"<<maxBound<<endl;

        if(minBound >= 0 && minBound <= ng-1) {
            cout << ag[minBound] << " ";
        }

        else {
            cout << "X ";
        }

        if(maxBound >= 0 && maxBound <= ng-1) {
            cout << ag[maxBound] << " ";
        }
        else {
            cout << "X ";
        }

        cout<<endl;
    }

    return 0;

}
