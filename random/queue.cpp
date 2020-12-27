#include <iostream>
using namespace std;

int queue[100];
int front= 0;
int back=-1;

bool isEmpty(){
    if(back < front)
        return true;
    else
        return false;
}

void push(int x){
    ++back;
    queue[back] = x;
}

void pop(){
    queue[front] = 0;
    ++front;
}

int getfront(){
    return queue[front];
}

int main()
{
    push(6);
    push(5);
    push(8);
    
    pop();
    cout << "Get front " <<  getfront() << endl;
    cout << "Is EMPTY " << isEmpty() << endl;
    
    push(8);
    push(2);
    
    pop();
    pop();
    pop();
    pop();
    
    cout << "Is EMPTY " << isEmpty() << endl;
    
    for(int i=front; i<=back ; i++)
        cout << queue[i] << endl;
        
   return 0;
}
