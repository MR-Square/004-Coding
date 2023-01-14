
//    NODE = DATA + LINK
/*
    DATA stores an information and LINK store address of another node.
    LINKED LIST:
    1. Singly Linked List(SLL).
    2. Circular Linked List(CLL).
    3. Doubly Linked List(DLL).

    OPETATIONS ON LINKED LIST:
    1. Insert 
    2. Delete
    3. Display
*/

struct node     // self refrential structure
{
    int data;
    struct node *next;
};

insertAtEnd(struct node *h,int d)
{
    struct node *p,*tmp;
   p = (struct node *) malloc(sizeof(struct node));
   if(p==NULL)
   {
       printf("\nNot Enough Memory...");
   }
   else
   {
       p->data=d;
       p->next=NULL;
       if (h==NULL)  // list is empty
       {
           h=p;   // so new node becomes first node
       }
       else   // list is not empty
       {
           tmp=h;
           while (tmp->next!=NULL)
           {
               tmp = tmp->next;
           }
           tmp ->next = p;
       }
       
       
   }
   return h;
}