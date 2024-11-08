#include<iostream>
using namespace std;
int main(){
int value;
cout<<"Enter the size of an array:";
cin>>value;
int A[value];
for(int i=0;i<value;i++){
    cout<<"Enter value to store in an array:";
    cin>>A[i];
}
for(int i=0;i<value;i++){
    cout<<A[i]<<endl;
}
return 0;

}