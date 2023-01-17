#include<bits/stdc++.h>

using namespace std;
int fib(int n){
    if(n==1)
    return 0;
    if(n==2){
        return 1;
    }
    return (fib(n-1)+fib(n-2));
}
void prime(int n){
    n=fib(n);int f=0;
//  cout<<b;   
    if(n==0||n==1)
    cout<<"not prime"<<endl;
    else{
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
         f=1;
         break;
        }
    }
    if(f==1)
    cout<<"not prime"<<endl;
    else 
      cout<<"prime"<<endl;
    }
}

int main(){
int n;cin>>n;
while(n--){
    int a;cin>>a;
    prime(a);
}

    return 0; 
}