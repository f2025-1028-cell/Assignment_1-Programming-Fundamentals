#include <iostream>
using namespace std;
int main() {
    int total_seconds =4564;
    int minutes = total_seconds/60;
    int seconds = total_seconds%60;
    cout <<total_seconds <<"seconds is equivalent to" << minutes <<"minutes and" <<seconds <<"seconds." <<endl;
       return 0;
}