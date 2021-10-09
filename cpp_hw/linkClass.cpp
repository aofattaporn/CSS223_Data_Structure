#include <iostream>
using namespace std;

// create node 
struct node
{
   int expo;
   int coeff;

   // ponter pont to next node 
   node *next;
};

// class linked list 
class linked_list
{

private:
   // ponter pont to head and tail 
   node *head;
   node *tail;
    
public:

   // initail list 
   linked_list()
    {
        head = NULL;
        tail = NULL;
    }

   void add_node(int coeff, int expo)
    {
         node *tmp = new node;
         tmp->coeff = coeff;
         tmp->expo = expo;

         tmp->next = NULL;

         // check head nulll
        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }

         // next tail
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

   node* gethead(){
      return head;
   }

   void front(int coeff, int expo)
    {
         node *tmp = new node;
         tmp -> coeff = coeff;
         tmp -> expo = expo;

         tmp -> next = head;
         head = tmp;
    }
   
   void display_all()
   {
        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << "coeff : " <<tmp->coeff << ", expo : " <<tmp->expo << endl;
            tmp = tmp->next;
        }
    }
   
   void display(node *head)
   {
      if(head == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->coeff << head->expo << endl;
            
        }
   }

};

linked_list add(linked_list a, linked_list b){
   node *tmp;
   linked_list c;
   
   int newexpo;
   return c;

}

int main()
{
   linked_list a;
   linked_list b;

   linked_list c;

   a.add_node(1, 1);
   b.add_node(2, 2); 
   // a.after(a.gettail(), 3);

   //  a.display(a.gettail());
   cout << "====================" << endl;
   // a.display_all();
   c = add(a, b);
   c.display_all();


   cout << "====================" << endl;

   return 0;

}