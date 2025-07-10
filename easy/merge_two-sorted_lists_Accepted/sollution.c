#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
   struct ListNode helper;
   struct ListNode * helperAdress =&helper;

   helper.next=NULL;

   while(list1!=NULL && list2!=NULL){
     if(list1->val<=list2->val){
       helperAdress->next=list1;
       list1 = list1->next;
     }else{
       helperAdress->next=list2;
       list2=list2->next;
     }
     helperAdress = helperAdress->next;
   }
     

   if(list1 != NULL){
     helperAdress->next=list1;
   }else{
     helperAdress->next=list2;
   }


   return helper.next ;
}

void add_node(struct ListNode ** adress_head){
  struct ListNode * newNode , *help=*adress_head;
  newNode=(struct ListNode *)malloc(sizeof(struct ListNode));
  printf("\n enter data: ");
  scanf("%d",&newNode->val);
  newNode->next=NULL;
  if(*adress_head==NULL){
    *adress_head=newNode;
  }else{
    while(help->next != NULL){
      help=help->next;
    }
    help->next=newNode;
  }
}

void printList(struct ListNode* start){
  if(start==NULL){
    printf("\n empty list");
  }else{
    
    printf("list :\n");
    while(start!=NULL){
      printf(" %d->",start->val);
      start=start->next;
    }
  }
}



int main(){
  struct ListNode * list1 =NULL;
  struct ListNode * list2 =NULL;
  int choose;
  do{
    printf("\nchoose : \n0-exit \n1-show list1 \n2-show list2\n3-add node list1 \n4-add node list2\n5-merge to list1\nyour choice: ");
    scanf("%d",&choose);
    switch(choose){
      case 1:
        printList(list1);
        break;
      case 2:
        printList(list2);
        break;
      case 3:
        add_node(&list1);
        break;
      case 4:
        add_node(&list2);
        break;
      case 5:
        list1=mergeTwoLists(list1,list2);
        break;
    }
  }while(choose!= 0);
  return 0;

}
