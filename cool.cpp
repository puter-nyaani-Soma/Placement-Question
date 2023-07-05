#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num=2365011;
    vector<int> num1;
    while(num){        
        num1.insert(num1.begin(),num%10);
        num/=10;

    }
    int sum1=0,sum2=0;

    for(int i=0;i<num1.size();i++){
        

    }
    // for(int i=0;i<num1.size();i++){
    //     sum1+=num1[i];
    //     for(int j=0;j<num1.size();j++){
    //            sum2+=num1[j];
    //            sum2-=sum1;
    //     }
    //     if(sum1==sum2){
    //         cout<<"is cool!"<<endl;
    //         break;
    //     }
    //     cout<<sum1<<"is sum";
    //     sum1-=num1[i];
        
        
        

    // }

    for (int i = 0; i < num1.size(); i++) {
        cout << num1[i];
        if (i != num1.size() - 1) {
            cout << ", ";
        }
    }

}