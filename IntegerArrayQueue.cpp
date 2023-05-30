#include "IntegerArrayQueue.h"

bool IntegerArrayQueue::enqueue(int value){
    if((front == 0) && (back == (size - 2))){
        //the array is full
        return false;
    }
    else if(((back + 1) % size) == front){
        //list is emtpy
        back = 0;
        array[back] = value;
        //back++;
        return true;
    }
    else if((back == (size - 1)) && (front != 0)){
        //array has room in the front
        back = 0;
        array[back] = value;
        //back++;
        return true;
    }
    else {
        //array has room in the back
        back++;
        array[back] = value;
        //back++;
        return true;
    }
}

int IntegerArrayQueue::dequeue(){
    if(((back + 1) % size) == front){
        //list is empty
        return 0;
    }
    else if(front == back){
        int data = array[front];
        front = 0;
        back = 9;
        return data;
    }
    else if(front == (size - 1)){
        //go back to the front
        int data = array[front];
        front = 0;
        return data;
    }
    else {
        int data = array[front];
        front++;
        return data;
    }
}
