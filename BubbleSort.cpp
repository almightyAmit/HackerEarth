#include <iostream>

using namespace std;

int main()
{
    int p;float arr[5],temp;
    cout<<"enter the numbers\n";
    for(p=0;p<5;p++){
        cin>>arr[p];
        cout<<"\n";
    }
    for(int i=0;i<5;i++){
        for(int j=4;j>i;j--){
            if(arr[j]<arr[j-1]){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    for(int d=0;d<5;d++){
        cout<<arr[d]<<"\n";

    }


}
