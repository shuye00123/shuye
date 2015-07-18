#include <iostream>
using namespace std;

bool quick(int a[],int bn,int en){
    if(bn<en) {
        int b,e;
        b=bn;
        e=bn-1;
        int p=a[en];
        for(;b<en;b++){
            if(a[b]<=p) {
                e=e+1;
                swap(a[b], a[e]);
            }
        }
        swap(a[en], a[e+1]);
        quick(a, 0, e-1);
        quick(a, e+1,en );
    }
    return true;
}

bool quick2(int a[], int bn, int en){
    if (bn<en) {
        int b=bn,e=en;
        int key=a[en];
        while (b<e) {
            while (a[b]<key) {
                b++;
            }
            if (b<e) {
                swap(a[b],a[e]);
                e--;}
            while (a[e]>key) {
                e--;
            }
            if(b<e){
                swap(a[e], a[b]);
                b++;}
        }
        quick2(a, 0, e-1);
        quick2(a, e+1, en);
    }
    return true;
}
int main(){
    int a[5]={2,1,3,6,5};
    quick(a, 0, 4);
    for (int i=0; i<5; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}

