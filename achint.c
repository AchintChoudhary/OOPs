#include<stdio.h>
int main(){
  int arr[]={100,200,300,400,500,600,700,800,900};
  int sum=0;
  for(int i=0;i<=8;i++){
sum+=arr[i];

  }
  printf("%d",sum);
  return 0;
}