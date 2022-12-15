#include<bits/stdc++.h>
using namespace std;
int main(){
forward_list<int>fl;
fl.assign({1,2,3,4,5,6,7,8,9,10});
cout<<"Before reverse "<<endl;
for(auto i:fl){
cout<<i<<" ";
}
cout<<"\nAfter reverse "<<endl;
fl.reverse();
for(auto i:fl){
cout<<i<<" ";
}
return 0;
}