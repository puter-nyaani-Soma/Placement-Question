    #include <iostream>
    using namespace std;
    const int MAX_SIZE = 999;
    class Stack{
        private:
            char arr[MAX_SIZE];
            int top;
        public:
            Stack(){
                top=-1;
            }
            bool isEmpty(){
                if (top==-1){
                    return true;
                }
                
                    return false;
                
            }
            bool isFull(){
                if(top==MAX_SIZE-1){
                    return true;
                }
                
                    return false;
                
            }
            int push(char value){
                if (isFull()){
                    cout<<"The stack is Full"<<endl;
                    return -1;
                }
                top++;
                arr[top]=value;
                return top;
            }
            int pop(){
                if(isEmpty()){
                    cout<<"The stack is empty"<<endl;
                    return -1;
                }
                char temp = arr[top];
                arr[top]=-1;
                top--;
                return temp;
            }
            char topval(){
                if(isEmpty()){
                    cout<<"the stack is empty"<<endl;
                    return -1;
                }
                return arr[top];
            }
            void display(){
                for(int i=top;i>=0;i--){
                    cout<<arr[i];
                }
            }
    };
    int main(){
        Stack newone;
        int flag;
        int i;
        string s;
        cin>>s;    
        for(i=0;i<s.length();i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
                newone.push(s[i]);
            }
            else if(s[i]=='}'){
                if(newone.topval()=='{'){
                    newone.pop();
                    continue;
                }
            }
            
            else if(s[i]==')'){
                if(newone.topval()=='('){
                    newone.pop();
                    continue;
                }
                else{
                    flag= -1;
                    break;
                }

            }
            else if(s[i]==']'){
                if(newone.topval()=='['){
                    newone.pop();
                    continue;
                }
                else{
                    flag= -1;
                    break;
                }

            }
            else{
                flag= -1;
                break;
            }
    }
    if(flag==-1){
        cout<<"Not balanced";
        return 0;
    }
    cout<<"Balanced";

}