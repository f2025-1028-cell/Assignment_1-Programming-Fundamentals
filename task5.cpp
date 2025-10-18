include <iostream>
using namespace std;

int main() {
    float item1 =12.95;
    float item2 =24.95;
    float item3 =6.95;
    float item4 =14.95;
    float item5 =3.95;
      cout <<"price of item1: $" <<item1 <<endl;
      cout <<"price of item2: $" <<item2 <<endl;
      cout <<"price of item3: $" <<item3 <<endl;
      cout <<"price of item4: $" <<item4 <<endl;
      cout <<"price of item5: $" <<item5 <<endl;
      float sub_total =item1+item2+item3+item4+item5;
      float sales_tax =sub_total *0.06;
      float total =sub_total + sales_tax;
      cout <<"sub_total:$" <<sub_total <<endl;
      cout <<"sales_tax:$" <<sales_tax <<endl;
      cout <<"total:$" <<total <<endl;
        return 0;
}