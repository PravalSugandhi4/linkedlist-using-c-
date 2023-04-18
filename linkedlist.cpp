//implementing singly linked list 

#include<iostream>
#include<conio.h>
using namespace std;
int ch,no,pos,check=0;
struct node
{
    int data;
    struct node *next;
};
struct node *start,*ptr,*temp,*pre;
void insertbegining()
{
    ptr=(struct node*)malloc(sizeof(struct node));
   
    if(ptr==NULL)
    cout<<"\n\t\tmemory is not allocate to ptr";
    else
 cout<<"\n\tenter the no...";
    cin>>no;
    ptr->data=no;
    if(start==NULL)
    {
        ptr->next=NULL;
        start=ptr;
    }
    else
    {
        ptr->next=start;
        start=ptr;
    }
    check++;
}
void  insertend()
{
    temp=start;
     ptr=(struct node*)malloc(sizeof(struct node));
      
    if(ptr==NULL)
    cout<<"\n\t\tmemory is not allocate to ptr";
    else
 cout<<"\n\tenter the no...";
    cin>>no;
    ptr->data=no;
    if(start==NULL)
    {
        ptr->next=NULL;
        start=ptr;
    }
    else
    {
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=NULL;
    }
check++;
}
void deleatbegining()
{
      temp=start;
if(start==NULL)
cout<<"\n\t\t\t\t linked list is empty";
else
{
   
    start=start->next;
    cout<<"delited element is....."<<temp->data;
    free(temp);
    check--;
}
}
 void deleatend()
 {
     temp=start;
     if(start==NULL)
     cout<<"\n\t\t\t linked list is empty";
     else
     {
         while(temp->next!=NULL)
       {  pre=temp;
         temp=temp->next;
       }
         cout<<"delited element is....."<<temp->data;
         free(temp);
         pre->next=NULL;
     }
     check--;
 } 
 void insertionatpos()
 {
     temp=start;
     ptr=(struct node*)malloc(sizeof(struct node));
 
 cout<<"\n\n\t\t\t\tenter the position....";
 cin>>pos;
 
 
 if(ptr==NULL)
 cout<<"memory is not allocate to ptr";
 else
 {
     if(start==NULL)
     cout<<"\n\ncan't insert";
     else
     {
         if(pos>check)
         {
         cout<<"\n you can't insert";
         }
         else
         {
            cout<<"\n\n\t\tenter the element...";
       cin>>no;
       ptr->data=no;
         for(int i=1;i<pos;i++)
         {
             pre=temp;
             temp=temp->next;
         }
         pre->next=ptr;
         ptr->next=temp;
         }
         
     }
 }
    }
 void delitionatpos()
 {
     temp=start;
   if(start==NULL)
   cout<<"linked list is empty";  
   else
   {
      cout<<"enter the position of deleat....";
      cin>>pos;
      if(pos<=check)
      {
      for(int i=1;i<pos;i++)
      {
          pre=temp;
          temp=temp->next;
      }
      cout<<"\n\n\ndelited element is ...."<<temp->data;
      pre->next=temp->next;
      free(temp);
     }
     else
     {
         cout<<"we can't deleat";
     }
     

   }
   
 }
 void print()
 { 
     temp=start;
     if(start==NULL)
     {
         cout<<"                          empty";
     }
     else
     {

while(temp->next!=NULL)
{
cout <<"\t"<< temp->data;
temp=temp->next;
}
    cout <<"\t"<< temp->data; 
     }
 }

int main()
{
    do
    {
    cout<<"\n\t-------------------main menu------------------";
    cout<<"\npress 1 insert at begining";
    cout<<"\npress 2 insert at  end";
    cout<<"\npress 3 deleat at begining";
    cout<<"\npress 4 deleat at end";
    cout<<"\npress 5 insertion at particular position";
    cout<<"\npress 6 deleat at particular position ";
    cout<<"\npress 7 to display";
    cout<<"\npress 8 to exit";


    cout<<"\n\n\t enter your choice....";
    cin>>ch;
switch(ch)
{
case 1:
  insertbegining();
break;
case 2:
  insertend();
break;
case 3:
  deleatbegining();
break;
case 4:
 deleatend();
break;
case 5:
insertionatpos();
break;
case 6:
delitionatpos();    
break;         
case 7:
print();
 break;
 case 8:
 break;
default:
    cout<<"\n\n\t\t wrong input";
}}while(ch!=8);

return 0;
}















