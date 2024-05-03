#include<bits/stdc++.h>

using namespace std;

int binarySearch (int a[], int start, int finish, int key){
    int m = (start + finish)/2;
    if(a[m]==key){
        return m;
    } else if (a[m]>key){
        return binarySearch(a, start, a[m]-1, key);
    } else {
        return binarySearch(a , a[m]+1, finish, key);
    }
    return -1;
}

int main(){
	int a[100];
	int n; cin>>n;
	for(int i=0; i<n;i++){
        cin>>a[i];
	}
	int key; cin>>key;
	cout<<binarySearch(a, 0, n-1, key);
	return 0;
}
