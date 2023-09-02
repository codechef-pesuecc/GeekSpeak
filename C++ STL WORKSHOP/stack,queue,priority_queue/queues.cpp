/*
  CODECHEF-PESUECC
*/

/*
  Queues -> FIFO (First In First Out) 
  
  push -> adding (enqueueing) elements to the back of the queue
  pop -> removing (dequeuing) elements from the front of the queue 
  front -> gives the front element of the queue 
  empty -> checks if the queue is empty or not 
  size -> returns the size of the queue 
  swap -> contents of two queues are swapped 
*/

#include<iostream>
#include<queue>
using namespace std;

int main(){
  
  // queue< datatype > queue_name; 

  // declaring a queue with integers 
  queue <int> q;

  // pushing values 10, 20, 30, 40, 50 into the queue
  for(int i=10; i<=50; i+=10){
    q.push(i); 
  }  

  queue<int>second, third; 

  second = q; 

  // to print the elements in the queue 
  cout<<"the elements of the queue q is "; 
  while(!q.empty()){
    cout<<q.front()<< " "; // prints the current front element of the queue 
    q.pop(); // removing the element 
  } 
  cout<<endl;
 
  // size of the queue 
  cout<<"The size of the queue q is "<<q.size()<<endl;  
  cout<<"The size of the queue second is "<<second.size()<<endl;
  
  second.swap(third); 

  cout<<"The elements in third queue: "; 
  while(!third.empty()){
    cout<<third.front()<< " "; 
    third.pop(); 
  }  

}