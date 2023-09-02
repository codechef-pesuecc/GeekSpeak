/*
    CODECHEF - PESUECC 
*/  

/*
    A priority queue is a data structure that stores elements with associated priorities and 
    allows efficient access to and removal of the element with the highest priority.
*/

#include<iostream>
#include<queue>
using namespace std;

int main(){ 

    // priority_queue < datatype > proirity_queue_name; 
    priority_queue<int> pq_mx;  // max heap -> elements stored in decreasing order  

    // priority_queue < datatype, vector<datatype>, greater< datatype >> priority_queue_name; 
    priority_queue <int,vector<int>,greater<int> > pq_mn; // min heap -> elements stored in increasing order  
    
    int arr[6]={19,62,37,42,50,69};

    // pushing elements to max pq_mx and pq_mn 
    for(int i=0;i<6;i++){
        pq_mx.push(arr[i]);
        pq_mn.push(arr[i]); 
    } 

    // emplace also performs same operation as push
    pq_mx.emplace(70); 
    pq_mx.emplace(90);    

    cout<<"The size of the pq_mx is: "<< pq_mx.size() << endl;  

    cout<<"The topmost element of pq_mn is: "<< pq_mn.top() << endl; 

    cout<<"The elements of pq_mx is: "; 
    while(!pq_mx.empty()){
        cout << pq_mx.top() << " "; 
        pq_mx.pop();
    }
    
    cout<<endl; 

    cout<<"The elements of pq_mn is: "; 
    while(!pq_mn.empty()){
        cout<<pq_mn.top() << " "; 
        pq_mn.pop(); 
    } 

}