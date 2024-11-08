#include<iostream>
using namespace std;
int main(){
const int value=10;
int A[value];
int order=10;
for(int i=0;i<value;i++){
A[i]=order-i;
  cout<<A[i]<<endl;
}
return 0;

}