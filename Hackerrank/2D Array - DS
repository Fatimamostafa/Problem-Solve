#include<iostream>
using namespace std;

int main() {

    int a[6][6], arr[20] = {};
    int maxSum = -1000;
    int result = 0;
    for(int row=0; row<6; row++){
        for(int column = 0; column<6; column++) {
            cin>>a[row][column];
        }
    }

    for(int r=0; r<4; r++){
        int counting = 0;
        while(counting < 4) {
            for(int i = counting; i<counting+3; i++){
                arr[result] += a[r][i] + a[r+2][i];
            }
            int tempresult = arr[result] + a[r+1][counting+1];
            if(tempresult > maxSum ) {
                maxSum = tempresult;
            }
            result++;
            counting++;
        }
    }

    cout << maxSum << endl;

    return 0;
}
