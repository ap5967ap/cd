#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
void linkedListTraversel(struct node *ptr){
    int i=0;
    while (ptr->next!=NULL)
    {
        printf("Data is %d at %d node\n",ptr->data,i);
        ptr=ptr->next;
        
        
        i++;
    }
    printf("Data is %d at %d node\n",ptr->data,i);
}
struct node *insertion_at_first(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
void insert_at_index(struct node *head, int data, int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
}
void insert_after_a_node(int data,struct node *p){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
}
void insert_at_end(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    while (p->next !=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->data=data;
}
int main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    head->data=5;
    head->next=second;
    second->data=55;
    second->next=third;
    third->data=89;
    third->next=NULL;
    // linkedListTraversel(head);
    // head=insertion_at_first(head,7575);
    // insert_at_index(head,7575,3);
    // insert_at_end(head,9898);
    insert_after_a_node(9696,second);
    linkedListTraversel(head);
return 0;
}