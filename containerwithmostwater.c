#include<iostream>

using namespace std;


int bruteForce(int n,int a[]){
    int width,length,area=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            width = j-i;
            length = min(a[i],a[j]);
            if (area < length*width){
                area = length*width;
            }
        }
    }
    return area;
}


int twinPointer(int n,int a[]){
    int i=0,j=n-1,left,right,area=0,height,width;
    while(i!=j){

        left = a[i];
        right = a[j];
        height = min(left,right);
        width = j - i;
        if(left < right){
            i++;
        } else {
            j--;
        }
        if (area < height*width){
            area = height*width;
        }
    }
    return area;
}



int main(){
    int n,a[100];
    cout<<"Enter the number of inputs: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th element: ";
        cin>>a[i];
    }
    cout<<bruteForce(n,a)<<endl;
    cout<<twinPointer(n,a)<<endl;
    return 0;
}
