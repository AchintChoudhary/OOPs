#include<iostream>
using namespace std;
class employee{
    public:
    employee(){
        cout<<"constructor called"<<endl;
    }
    ~employee(){
        cout<<"Deconstructor called"<<endl;
    }
};
int main(){
employee e;
return 0;
}