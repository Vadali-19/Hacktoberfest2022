#include<iostream>
#include<cstdlib>
using namespace std;
template<class T>
struct node{
     T info;
     node *next;
 };
template<class T>
class queuell{
   node<T> *front,*rear;
 public:
   queuell(){
 front=rear=NULL;
 }
  void enque(T);
  T deque();
void display();
};
template<class T>
void queuell<T>::enque(T value){
  node<T> *t;
t=new node<T>;
t->info=value;
t->next=NULL;
if(rear==NULL){
  front=rear=t;
  return;
}
rear->next=t;
rear=t;
}
template<class T>
T queuell<T>::deque(){
T t;
if(front==NULL){
 cout<<"queue empty!"<<endl;
  return(0);
}
t=front->info;
if(front==rear){
 front=rear=NULL;
return(t);
}
node<T> *temp;
temp=front;
front=front->next;
delete(temp);
return(t);
}
template<class T>
void queuell<T>::display(){
node<T> *temp;
temp=front;
if(temp==NULL)
{
 cout<<"queue empty";
return;
}
else{
   cout<<"elements in the queue";
   while(temp!=NULL){
   cout<<temp->info<<"->";
   temp=temp->next;
}
}
}
int main(){
 queuell<char> q;
char c,t;
 int choice;
cout<<"1.Deque\n2.Enque\n3.Display\n4.Exit"<<endl;
do{
cout<<"enter your choice"<<endl;
cin>>choice;
switch(choice){
   case 1 :cout<<"enter a char"<<endl;
           cin>>c;
           q.enque(c);
           break;
  case 2 : t=q.deque();
            cout<<"deleting character";
            cout<<t<<endl;
           break;
   case 3 : q.display();
           break;
  case 4 :cout<<"exit";
         exit(1);
}
}while(1);
return 0;
}
/*output
1.Deque
2.Enque
3.Display
4.Exit
enter your choice 1
enter a char j
enter your choice 1
enter a char y
enter your choice 3
elements in the queuej->y->
enter your choice 2
deleting characterj
enter your choice 2
deleting character y
enter your choice 3
queue empty
enter your choice 4
exit
*/
