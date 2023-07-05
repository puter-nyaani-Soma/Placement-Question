#include <iostream>
using namespace std;
int points(int price){
    int point=0,times;

    while(price>0){
        if(price >= 5000){
            times=price/5000;
            point+=times*5;
            price-=5000*times;
        }
        else if (price >= 1000) {
            times=price/1000;
            point+=times*3;
            price-=1000*times;
        
        }
        else if (price >= 100) {
            times=price/100;
            point+=times*2;
            price-=100*times;
        
        }
        else if(price >= 50){
            times=price/50;
            point+=times*1;
            price-=50*times;

        }
        else {
        return point;
        }
    }
    return point;
}
int main(){
    int price=0;
    cout<<"Enter the price : ";
    cin >> price;
    cout << points(price);
}