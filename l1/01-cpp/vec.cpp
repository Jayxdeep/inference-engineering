#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={10,20,30,40};
    for(int x:v){
        cout << x << " ";
    }
    cout<<"\n";
//insert
    vector <char> v2={'a','f','d'};
    v2.push_back('z'); //inserts at the back
    v2.insert(v2.begin()+1,'c');//inserts at index 1
    for(char i:v2)
        cout<<i<<" ";
    cout<<"\n";
//access elem
    vector<int> v3={10,20,30,40};
    cout<<"element at index 2 using []:" <<v3[2]<<endl;
    cout<<"element at index 3 using at():"<<v3.at(3)<<endl;
    cout<<"\n";
//update 
    vector<int>v4={10,20,30};
    cout<<"original value at index 1:"<<v4[1]<<endl;
    v4[1]=50;
    cout <<"updated value at index 1:"<<v4[1]<<endl;
    return 0;
}