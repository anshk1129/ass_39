#include<bits/stdc++.h>
using namespace std;
int main(){
forward_list<int>fl;
fl.assign({1,2,2,3,3,4,5,9,6,4,4,4,7,8,8,8,9,10});
cout<<"Before deletion of consecutive element"<<endl;
for(auto i:fl){
cout<<i<<" ";
}
cout<<"\nAfter  deletion of consecutive element "<<endl;
fl.unique();
for(auto i:fl){
cout<<i<<" ";
}
return 0;
}