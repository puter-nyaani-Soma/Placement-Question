#include <iostream>
#include <map>
using namespace std;
int main(){
    int num[7]={1,1,1,2,2,3,4};
    int i,n=2;
    map <int,int> freq ;
   

    for(i=0;i<7;i++){
        freq[num[i]]++;

    }
    
   
   map<int, int>::iterator iter;
    for (iter = freq.begin(); iter != freq.end(); ++iter) {
        int key = iter->first;
        int value = iter->second;
        cout << "Key: " << key << ", Value: " << value << endl;
    }
    while(n){
        int maxkey=99;
        int max=0;
    for (iter = freq.begin();iter!=freq.end();++iter){
        if(iter->second>max){
            max=iter->second;
            maxkey=iter->first;
        }
        
    }
    cout<<maxkey;
    n--;
    freq.erase(maxkey);
        
    }
}
