#include "AQueue.h"

template<typename T>
bool AQueue<T>::isEmpty() const{
    return count == 0; 
}

template<typename T>
bool AQueue<T>::enqueque(const T& newEntry){
    bool funcWork = false;
    if(numItems < CAPACITY){
        back = (back++) % CAPACITY;
        queueArray[back] = newEntry;
        numItems++;
        funcWork = true;
    }
    return funcWork;
}

template<typename T>
bool AQueue<T>::dequeue(){
    bool funcWork = false;
    if(isEmpty == false){
        front = (front++) % CAPACITY;
        numItems--;
        funcWork = true;
    }
    return funcWork;
}

template<typename T>
T AQueue<T>::peekFront() const{
    return queueArray[front];
}