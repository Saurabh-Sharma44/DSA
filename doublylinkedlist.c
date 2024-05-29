#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct node *next;
    struct node *prev;

};
//creating a pointer to the head and tail
struct node*head = NULL;
struct node*tail = NULL;
//creating new node
struct node* create_node(int data)
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    new_node ->data = data;
    new_node ->next = NULL;
    new_node ->prev = NULL;
    return new_node;

}
//inserting a node at a begining
void insert_at_beg(int data){
     if(head==NULL){
        head = new_node;

     }
}
int main(){
    insert_at_beg(19);
    insert_at_end(14);
    insert_at_beg(19);
    insert_at_beg(19);
    insert_at_end(14);
    delete_at_beg();
    delete_at_end();


}//checking