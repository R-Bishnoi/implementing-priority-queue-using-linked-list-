
 
 #include<bits/stdc++.h>
 using namespace std;
 
 class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
     
 };
 
 
  node *head=NULL;
  
 //enqueue function
 void enq(int val){
     
     if(head==NULL){
         node* temp=new node(val);
         head=temp;
         return;
     }
     
    
     
     else{
         node* curr=head;
         node* prev=NULL;
         
         if(curr->data < val){
             node* temp=new node(val);
             temp->next=curr;
             head=temp;
             return;
         }
       
         
    //write curr!=NULL  first if you write this after end then it is wrong 
    //because of when curr goes to null then you first checking curr->data that is wrong 
    //while(curr->data > val && curr!=NULL)  this is wrong 
    
    
        while(curr!=NULL && curr->data > val){
            prev=curr;
            curr=curr->next;
        } 

        
        node* temp=new node(val);
        prev->next=temp;
        temp->next=curr;
        

         return;
         
     }
     
     
 }
 
 
//dequeue function

void deq(){
  
    if(head==NULL)return;
    
    node* temp=head;
    head=head->next;
    free(temp);
}


void peek(){
    
   if(head==NULL){
       cout<<"queue is empty"<<endl;
   } 
   
   cout<<head->data<<endl;
    
}
 
 
 
 
 int main(){
    
     
     enq(20);
     enq(30);
     enq(10);
     enq(40);
    
     
   deq();
   peek();
     
     
     return 0;
 }
 
