#include<iostream>
using namespace std;
int main(){
const int value=10;
int countpositive=0;
int countnegative=0;
int countodd=0;
int counteven=0;
int count0=0;
int A[value];
cout<<"Enter the integer:"<<endl;
for(int i=0;i<value;i++){
    cin>>A[i];
    }
 for(int i=0;i<value;i++){
  if(A[i]>0){
    countpositive++;
  }   
}
cout<<"Total number of positive numbers:"<<countpositive<<endl;

for(int i=0;i<value;i++){
if(A[i]<0){
    countnegative++;
}
}
cout<<"Total number of negative number:"<<countnegative<<endl; 

for(int i=0;i<value;i++){
if(A[i]%2==0){
    counteven++;
}
}
cout<<"Total number of even numbers:"<<counteven<<endl;

for(int i=0;i<value;i++){
if(A[i]%2!=0){
    countodd++;
}
}
cout<<"Total number of odd numbers:"<<countodd<<endl;

for(int i=0;i<value;i++){
if(A[i]==0){
    count0++;}
}
cout<<"Total numbers equal to zero/0:"<<count0<<endl;
return 0;
}