#include <iostream>
#include <map>
using namespace std ;
int find_color(int *arr,int n){
   map <int,int> color ;
   for(int i=0;i<n;i++){
    color[arr[i]]++;
   }
   map <int,int>::iterator iter;
//    for(iter = color.begin(); iter != color.end();++iter){
//     iter->first++;
    for (iter = color.begin(); iter != color.end(); ++iter) {
        int key = iter->first;
        int value = iter->second;
        cout << "Key: " << key << ", Value: " << value << endl;
    }
    
//    }
    int sum =0;
   for(iter = color.begin(); iter != color.end();++iter){

    if(iter->second <=1 ){
        sum+=iter->first+1;
        cout<<sum<<"+";

    }
    else{
        //  sum+=(iter->second)/((iter->first+1))+((iter->second%iter->first+1)*(iter->first+1));

        while(iter->second>0){
            sum+=iter->first+1;
            iter->second-=iter->first+1;
        }
        cout<<sum<<"+";
        


    }
   }
    cout<<"sum="<<sum << endl;
    return 1;


}
int main(int argc,char **argv){
    int n= atoi(argv[1]);
    int i;
    cout<<n<<endl;
    int* arr= (int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        arr[i]= atoi(argv[i+2]);
    }
   find_color(arr,n);
}
