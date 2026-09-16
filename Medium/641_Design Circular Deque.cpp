#include<bits/stdc++.h>
using namespace std;
class MyCircularDeque {
public:
    vector<int> dequee;
    int K;
    int first;
    int last;
    int current;
    MyCircularDeque(int k) {
        K = k;
        dequee = vector<int>(K, 0);
        first = 0; 
        last = K-1;
        current = 0;
    }
    
    bool insertFront(int value) {
        if(isFull()){
            return false;
        }
        first = (first-1+K) % K;
        dequee[first] = value;
        current++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()){
            return false;
        }
        last = (last+1) % K;
        dequee[last] = value;
        current++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()){
            return false;
        }
        first = (first+1) % K;
        current--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()){
            return false;
        }
        last = (last-1+K) % K;
        current--;
        return true;
    }
    
    int getFront() {
        if(isEmpty()){
            return -1;
        }
        return dequee[first];
    }
    
    int getRear() {
        if(isEmpty()){
            return -1;
        }
        return dequee[last];
    }
    
    bool isEmpty() {
        return current == 0;
    }
    
    bool isFull() {
        return current == K;
    }
};

