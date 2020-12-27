#include <iostream>
using namespace std;

int stack[100];
int ind=-1;

bool isEmpty(){
    if(ind >= 1)
        return false;
    else
        return true;
}

void push(int x){
    ++ind;
    stack[ind] = x;
}

void pop(){
    stack[ind] = 0;
    --ind;
}

int top(){
    return stack[ind];
}

int main()
{
   push(5);
   push(4);
   
   push(7);
   
   cout << top() << endl ;
   
   pop();
   pop();
   
   cout << top() << endl;
   push(8);
   
   for(int i=0; i<=ind ; i++)
        cout << stack[i] << endl;
        
   return 0;
}
