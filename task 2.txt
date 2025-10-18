#include <iostream>
using namespace std;
int main() {
           int num1,num2;
           cout <<"Enter first number:" <<endl;
           cin >> num1;
           cout <<"Enter second number:" <<endl;
           cin >> num2;
           cout <<"sum :" <<num1+ num2 <<endl;
           cout <<"difference:" << num1 - num2 <<endl;
           cout <<"product:" <<num1* num2 <<endl;
           
           if(num2 !=0)
           {
               cout << "quotient:" << num1 /num2 <<endl;
             
           }
           else {
           cout <<"can  not divide by zero" <<endl;
           }
           return 0;
}