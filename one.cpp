#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>fl,f2={1,2,3,4,5};
    fl.push_front(10);
    fl.push_front(20);
    fl.push_front(30);
    fl.pop_front();
    fl.swap(f2);
    for(auto i=fl.begin();i!=fl.end();i++){
        cout<<*i<<" ";
        }
        cout<<endl;
         for(auto i=f2.begin();i!=f2.end();i++){
        cout<<*i<<" ";
        }
}