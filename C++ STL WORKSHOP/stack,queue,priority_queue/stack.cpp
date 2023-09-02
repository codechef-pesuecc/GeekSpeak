/*
    CODECHEF - PESUECC 
*/ 

/*
    Stacks -> LIFO (Last In First Out)

    push -> pushing elements onto the top 
    pop -> poping elements from the top
    top -> returns the topmost element from the stack
    size -> returns the size of the stack
    empty -> checks if the stack is empty or not 
    swap -> swaps the elements of two stacks
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // declaring a stack 
    // stack < datatype > stack_name; 
    stack<int> st;
    stack<int> st1;

    // pushing elements into the stack1 
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5); 

    // pushing elements into the stack2 
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    st1.push(50); 

    // swapping contents of stack st and st1 
    st.swap(st1);
    

    cout<<"The top element of the stack st is "<<st.top()<<endl;
    cout<<"The size of the stack st is "<<st.size()<<endl;
    cout<<"Is the stack empty ? "<<st.empty()<<endl;  // 0 -> not empty, 1 -> empty

    // printing the contents of the stack  
    cout<<"The elements of stack st1 is : ";
    while(!st1.empty()){
        cout<<" "<<st1.top();  //printing the topmost element and poping (removing) it 
        st1.pop();
    } 
    cout<<endl; 

    cout<<"The elements of stack st is : ";
    while(!st.empty()){
        cout<<" "<<st.top();  //printing the topmost element and poping (removing) it 
        st.pop();
    }
    return 0;
}