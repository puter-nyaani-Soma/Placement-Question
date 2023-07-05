#include <iostream>
using namespace std;
string one [] ={"","one", "two", "three", "four", "five", "six", "seven", "eight","nine","ten","eleven", "tweleve","thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eightteen", "nineteen"};
string ten[]={"","","twenty", "thirty", "fourty","fifty","sixty","seventy","eighty","ninety"};
string numname(int n,string s){

    string str="";
    if(n>19){
        str+=ten[n/10]+one[n%10];

    }
    else{
        str+=one[n];
    }
    if(n){
        str+=s+" ";
    }
    return str;
}
string answer(int n){
    string str="";
    str+=numname((n/10000000)," crores");
    str+=numname((n/100000)%100," lakhs");
    str+=numname((n/1000)%100," thousands");
    str+=numname((n/100)%10," hundreds");
    str+=numname((n%100),"");
    return str;
}
int main(){
    int n = 9999;
    cout<<answer(n);



}