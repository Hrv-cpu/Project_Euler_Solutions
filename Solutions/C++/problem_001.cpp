#include <iostream>
using namespace std;
int sum = 0;

int main(){
    for(int num = 0; num < 1000; num++){
        if(num % 3 != 0 and num % 5 != 0)
            continue;
        else
            sum = sum + num;
    }
    cout<<"Sum: "<<sum;
    return 1;
}