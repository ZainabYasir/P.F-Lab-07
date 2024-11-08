#include<iostream>
using namespace std;
int main(){
const int value=10;    
int A[value];
for(int i=0;i<value;i++){
    cout<<"Enter the number of hours studied by the student:";
    cin>>A[i];
}
for(int i=0;i<10;i++){
    cout<<A[i]<<endl;
    
}
int maxhours=A[0];
int maxindex=0;
for(int i=1;i<10;i++){
    if(A[i]>maxhours){
        maxhours=A[i];
        maxindex=i;
    }
}
    cout<<"Maximum hours studied by student:"<<maxhours;

return 0;

}