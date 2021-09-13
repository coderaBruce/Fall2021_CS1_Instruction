// Lab03 Print Figures
// Created by XinyuLi on 9/12/21.

#include<iostream>
using namespace std;

void square(int size, char sybl){
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            cout<<sybl;
        }
        cout<<endl;
    }
}

void spline(int size, char sybl){
    int s = 0;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if (j!=i){
                cout<<" ";
            }
            else{
                cout<<sybl;
            }
        }
        if (i<size-1){
            cout<<endl;
        }
    }
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if ((j+i)!=size){
                cout<<" ";
            }
            else{
                cout<<sybl;
            }
        }
        cout<<endl;
    }
}

void hollow(int size, char sybl){
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if (i==0 or i==size-1){
                cout<<sybl;
            }
            else {
                if (j==0 or j==size-1){
                    cout<<sybl;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}

void diamond(int size, char sybl){
    for (int i=0; i<2*size-1; i++){
        for (int j=0; j<2*size; j++){
            if (i < size){
                if (j==(size-1+i) or (j==size-1-i)){
                    cout<<sybl;
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if ((j==(i-size)+1) or ((j+i)==3*size-3)){
                    cout<<sybl;
                }
                else{
                    cout<<" ";
                }
            }

        }
        cout<<endl;
    }

}

int main(int argc, char **argv){
    int size;
    char sybl;
    cout<<"Input figure size: ";
    cin>>size;
    cout<<"Input paint character:  ";
    cin>>sybl;

    //Square Print
    square(size, sybl);
    spline(size, sybl);
    hollow(size, sybl);
    diamond(size, sybl);
    return 0;
}

