#include <iostream>
using namespace std;
int main(){
    int x=10;
    int* myptr;
    myptr= &x;
    cout <<"Value of x is:";
    cout <<x << endl;
    cout <<"Address stored in myptr is:";
    cout <<myptr <<endl;
    cout << "Value of x using *myptr is: ";
    cout << *myptr << endl;
    return 0;
}