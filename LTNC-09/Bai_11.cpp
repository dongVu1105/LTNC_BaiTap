#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[6][6];
    for(int i=0; i<6;i++){
        for(int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    int maxSum=INT_MIN;
    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            int sum =0;
            int pos=0;
            for(int k=i;k<i+3;k++){
                for(int l=j;l<j+3;l++){
                    pos++;
                    if(pos ==4 || pos ==6){
                        continue;
                    }
                    sum+=a[k][l];
                }
            }
            maxSum = max(maxSum, sum);
        }
    }
    return 0;
}
