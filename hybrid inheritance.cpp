#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"this is vehicle\n";
    }
};
class Car:public vehicle{
    public:
    void car(){
        cout<<"this is car\n";
    }
};
class Racing{
    public:
   void racing(){
    cout<<"this is for racing\n";

    }
};
class ferrari:public Car,public Racing{
public:
ferrari(){
    cout<<"ferrari is aracing car\n";
}
};

int main(){
    ferrari f;  
      return 0;
}