#include<bits/stdc++.h>

using namespace std;

int main(){

int n,mid; cin>>n>>mid;int arr[mid+1];for(int i=0;i<=mid;i++)cin>>arr[i];
int l=n-(mid+1); int arr1[l];for(int i=0;i<l;i++)cin>>arr1[i];
int u=mid+1;
int arr2[n];int i=0,j=0,k=0;
while(i<u && j<l){
    if(arr[i]<arr1[j]){
        arr2[k++]=arr[i++];
    }
    if(arr[i]>arr1[j]){
        arr2[k++]=arr1[j++];
    }
}
if(i<u){
while(i<u){
    arr2[k++]=arr[i++];
}
}
if(j<l){
while(j<l){
    arr2[k++]=arr1[j++];
}
}
for (int i = 0; i < k; i++)
{
    cout<<arr2[i]<<" ";
}

    return 0; 
}