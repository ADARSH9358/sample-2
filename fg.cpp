#include<bits/stdc++.h>

using namespace std;
struct ad{
    int x;
    int y;
    string s;
};
int add(struct ad a){
    a.x=a.x+5;
    return a;
}

int main(){
ad a;
ad *tr=&a;
// for(int i=0;i<5;i++){
    cin>>a.x>>a.y>>a.s;
// }
int l=add(a);
cout<<l<<" ";
cout<<a.x<<" "<<a.y;
    // cout<<"  "<<sizeof(a.x)<<"  "<<a.y<<"  "<<sizeof(a.s);
    cout<<"  "<<&(tr->x)<<"  "<<&(tr->y)<<"  "<<&(tr->s);


// for(int i=0;i<5;i++){
//     cout<<a[i].x<<" "<<a[i].y<<" "<<a[i].s<<endl;
// }
// ad a={2,6,"adarsh"};
// cout<<a.x<<endl;
// cout<<a.y<<endl;
// cout<<a.s;

    return 0; 
}