#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}
int main(){
    int a,b;
    cin>>a>>b;
    int n=a+ 1;
    int l=1;
    while(l==1){
        int A=prime(n);
        if(A==1){
            l=0;
        }
        else{
            n++;
        }
    }
    if(n==b){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
