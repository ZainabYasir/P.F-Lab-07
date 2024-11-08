#include<iostream>
using namespace std;
int main(){
const int value=7;
int count=0;
int A[value];
cout<<"Enter the seven integers of an array:";
for(int i=0;i<value;i++){    
cin>>A[i];
if(A[i]%5==0){
    count++;
}
}
cout<<"The number of integers that are multiples of five is:"<<count<<endl;
return 0;
}