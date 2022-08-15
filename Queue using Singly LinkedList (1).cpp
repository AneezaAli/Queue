#include<iostream>
using namespace std;

class Node{
     private:
       int data;
       Node *next;
    public:
       Node(){
       data = 0;
       next = NULL;
    }
       Node(int data){ 
        this -> data = data;
        next = NULL;
    }
       void setData(int data){
        this -> data = data;
    }
       void setNext(Node *next){
        this -> next = next;
    }
       int getData(){
        return data;
    }
       Node getNext(){
       return next;
    }
};

class LinkedList(){
      private:
        Node *head;
      public:
};

class Queue(){
      private:
       LinkedList l1;
}
int main()
{
    Queue q1;
}