#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter SIZE:";
    cin>>n;
    int **arr= new *[n];
    for(int i=0;i>n;i++){
        int arr[i]=new [n];
    }
    for(int i=0;i>n;i++){
        for(int j=0;i>n;j++){
            cin>>arr[i][j];
    }
    }

    for(int i=0;i>n;i++){
        for(int j=0;i>n;j++){
            cout>>arr[i][j];
    }
    }
    return 0;
}