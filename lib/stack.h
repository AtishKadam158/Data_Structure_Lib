#ifndef LIB_H
#define LIB_H

#include <iostream>
using namespace std;
class stack{
    private:
        int *arr;
        int topIndex;
        int capacity;
    public:
        stack(): arr(),topIndex(-1),capacity(INT16_MAX){arr=new int[capacity];}
        stack(int num): arr(),topIndex(-1),capacity(num){arr=new int[capacity];}
        ~stack(){
            delete[] arr;
        }
        bool isEmpty(){
            if(topIndex==-1)return true;
            return false;
        }
        bool isFull(){
            if(topIndex==capacity-1)return true;
            return false;
        }
        void push(int num){
            if(!isFull()){
                arr[topIndex+1]=num;
                topIndex++;
            }
            else
                cout<<"Stack Overflow"<<endl;
        }
        int pop(){
            if(!isEmpty()){
                cout<<arr[topIndex]<<endl;
                topIndex--;
            }
            else
                cout<<"Stack Empty"<<endl;
        }
        int size(){
            return topIndex+1;
        }
        int top(){
            return arr[topIndex];
        }
        
};
#endif

