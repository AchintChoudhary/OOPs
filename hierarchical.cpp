#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"eat's";
    }
};
class lion:public animal{
    public:
    void meat(){
        cout<<"meat"<<endl;
    }
};
class cow:public animal{
    public:
    void grass(){
        cout<<"grass"<<endl;
    }
};

int main(){
    lion obj1;
    obj1.eat();
    obj1.meat();
    return 0;
}