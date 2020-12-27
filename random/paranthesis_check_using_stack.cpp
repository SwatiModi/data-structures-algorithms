#include <iostream>
using namespace std;

char stack[100];
int ind=0;
string expr;

bool isEmpty(){
    if(ind > 0)
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

char top(){
    return stack[ind];
}

int main()
{
   cin >> expr;
   
   for(int i=0; expr[i]!='\0'; i++){
       if(expr[i] == '{' || expr[i] == '[' ||  expr[i] == '(') 
            push(expr[i]);
        else if (expr[i] == '}' || expr[i] == ']' ||  expr[i] == ')'){
            if((expr[i] == ']' && top() == '[') || (expr[i] == '}' && top() == '{') || (expr[i] == ')' && top() == '(')){
                pop();
            }
            else{
                cout << "Invalid expression" << endl;
                return 0;
            }
        }
   }    
        
    if(isEmpty())
        cout << "Valid expression" << endl;
        
   return 0;
}
