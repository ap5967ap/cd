#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
void tranversal(struct node *head){
    int i=0;
    while (head->next!=NULL)
    {
        printf("Data at %d node is %d\n",head->data,i);
        head=head->next;
        ++i;
    }
    printf("Data at %d node is %d\n",head->data,i);
}
struct node* delete_first_element(struct node *head){
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
void delete_at_index(int index, struct node*head){
    struct node *p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        ++i;
    }
    struct node *q=p->next;
    p->next=q->next;
    free(q);
}
void delete_end(struct node *head){
    struct node *p=head;
    struct node *q=head->next;
    while (q->next !=NULL)
    {
        p=q;
        q=q->next;
    }
    p->next=NULL;
    free(q);
}
int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));
    struct node *fifth=(struct node*)malloc(sizeof(struct node));
    head->data = 87;
    head->next = second;
    second->data = 97;
    second->next = third;
    third->data = 117;
    third->next = fourth;
    fourth->data =227;
    fourth->next = fifth;
    fifth->data =777;
    fifth->next = NULL;
    // head=delete_first_element(head);
    // delete_at_index(2,head);
    delete_end(head);
    tranversal(head);
return 0;
}