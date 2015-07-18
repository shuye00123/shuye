//
//  merg.cpp
//  merg
//
//  Created by shuye on 15/4/12.
//
//

//#include<iostream>
using namespace std;
bool mergethem(int a[],int abegin,int amid,int aend){
    int n,m1=0,m2=0;
    int i=amid-abegin+1;
    int j=aend-amid+1;
    int *fir=new int[i];
    int *sec=new int[j];
    for(n=0;n<i;n++)
    {
        fir[n]=a[abegin+n];}
    for(n=0;n<j;n++)
    {
        sec[n]=a[amid+n];}
    while(abegin<aend){
        a[abegin++]=fir[m1]<sec[m2]?fir[m1++]:sec[m2++];
    }
    delete fir;
    delete sec;
    return true;
}
bool merge(int a[],int abegin,int aend){
    if(abegin>=aend-1){
        return false;}
    int amid = (abegin+aend)/2;
    merge(a,abegin,amid);
    merge(a,amid,aend);
    mergethem(a,abegin,amid,aend);
    return true;
}
int main(){
    int n=10;
    int a[n]={2,4,1,9,6,3,7,8,5,10};
    merge(a,0,n);
    for(i=0;i<n;i++){
        cout<<a[i];
        cout<<" ";
    }
    return 0;
}

