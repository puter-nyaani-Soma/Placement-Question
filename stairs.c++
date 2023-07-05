#include <iostream>
using namespace std;
int findStairs(int n){
    int a=0;
    int b=1;
    int c=0;
    int i=0;
    while(i<n){
        c=a+b;
        a=b;
        b=c;
        i++;
       

    }
    return c;
}

int main(){
    int n;
    cin >>n;
    cout<<"\n No.of.Ways :"<<findStairs(n);
    int *row= malloc(size )

}
