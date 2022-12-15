#include<bits/stdc++.h>
using namespace std;
int main(){
forward_list<int>fl;
int sum=0;
fl.assign({1,2,3,4,5,6,7,8,9,10});
for(auto i:fl){
sum=sum+i;
}
cout<<"Sum is "<<sum<<endl;
}