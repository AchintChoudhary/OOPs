#include<iostream>
int main(){ 
     int rate1, rate2, units, bill;
rate1=5;
rate2=10;
std::cout<<"enter unit consumed by client:";
std::cin>>units;
if(units<250){
bill=units*rate1;
std::cout<<"total bill is "<<bill;
}
else{
bill=units*rate2;
std::cout<<"total bill is"<<bill;
}
return 0;
}
