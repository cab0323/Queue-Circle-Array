#include "IntegerArrayQueue.h"
#include "IntegerArrayQueue.cpp"

int main(){
    IntegerArrayQueue arr;

    arr.printArrayQueue();
    
    
    
    arr.enqueue(1);
    arr.enqueue(3);
    arr.enqueue(5);
    arr.enqueue(15);
    arr.dequeue();
    arr.dequeue();
    arr.enqueue(45);


    arr.printArrayQueue();
}