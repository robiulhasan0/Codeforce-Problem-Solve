#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        int a=0;
        for(int i=0;i<3;i++){
            if(arr[x- 1]!=0){
                a++;
                x=arr[x- 1];
            }

        }
        if(a==2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
