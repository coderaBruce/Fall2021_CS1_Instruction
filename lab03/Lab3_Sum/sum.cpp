// Lab03: Sum of a sequence
// Created by XinyuLi on 9/12/21.
//

#include <iostream>
using namespace std;
int main(){
   cout<<"Input sequence of integers (zero to stop):";
   int a;
   cin>>a;
   int sum=0;
   while (a != 0){
       if (a > 0){
           sum += a;
       }
       cin>>a;
   }
   cout<<"The sum of positive numbers is:"<<sum<<endl;
   return 0;
}

