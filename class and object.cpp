#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    string h;
};
int main(){

car obj0;
obj0.brand="brand";
obj0.model="model";
obj0.h="year";

car obj1;
obj1.brand="BMW";
obj1.model="X5";
obj1.h="1999";

car obj2;
obj2.brand="Ford";
obj2.model="Mustang";
obj2.h="1969";

cout<<obj0.brand<<"\t"<<obj0.model<<"\t"<<obj0.h<<"\n";
cout<<"\n";
cout<<obj1.brand<<"\t"<<obj1.model<<"\t"<<obj1.year<<"\n";
cout<<obj2.brand<<"\t"<<obj2.model<<"\t"<<obj2.year<<"\n";
}