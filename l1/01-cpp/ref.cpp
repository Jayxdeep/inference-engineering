#include <iostream> //
using namespace std;
int main(){
    int y=10;
    int& myref=y; //alternate name for an existing variable.
    y=30;
    cout<<"value of y is" <<y << endl;
    cout<<"value of myref after change in value of y is:"<<myref<< '\n';
    return 0;
}