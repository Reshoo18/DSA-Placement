#include<iostream>
#include<list>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;

    }
};
class Queue{
    Node*head;
    Node*tail;
    public:
    Queue(){
        head=tail=NULL;
    }
};
int main(){

return 0;
}