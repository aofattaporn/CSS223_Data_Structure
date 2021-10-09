#include <iostream>
using namespace std;

// create node 
struct node
{
   int expo;
   int coeff;
   node *next;
};

// class linked list 
class linked_list
{

private:
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
       // add to node 
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

         // next teil 
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

   node* gethead(){
      return head;
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

};

linked_list add(linked_list a, linked_list b){
   
   linked_list c;
   node *tmpA;
   node *tmpB;
   tmpA = a.gethead();
   tmpB = b.gethead();

   while (tmpA != NULL && tmpB != NULL)
   {
   
      if (tmpA->expo == tmpB->expo)
      {
         c.add_node(tmpA->coeff + tmpB->coeff, tmpA->expo);

         tmpA = tmpA->next; 
         tmpB = tmpB->next;
         continue;
         }
      
      else if (tmpA->expo > tmpB->expo)
      {
         c.add_node(tmpA->coeff, tmpA->expo);
         tmpA = tmpA->next; 
      }
      
      else if (tmpA->expo < tmpB->expo)
      {
         c.add_node(tmpB->coeff, tmpB->expo);
         tmpB = tmpB->next;
      }

   }

   while (tmpA != NULL)
   {
      c.add_node(tmpA->coeff, tmpA->expo);
      tmpA = tmpA->next;
   }
   
   while (tmpB != NULL)
   {
      c.add_node(tmpB->coeff, tmpB->expo);
      tmpB = tmpB->next;
   }
   
   return c;
   
}

linked_list multi(linked_list a, linked_list b){

   linked_list c;
   node *tmpA;
   node *tmpB;
   node *tmpC;
   node *tmp;

   // set tmpA, tmpB point to head 
   tmpA = a.gethead();
   tmpB = b.gethead();
   

   while (tmpA != NULL )
   {
      while (tmpB != NULL)
      {
         c.add_node(tmpA->coeff * tmpB->coeff, tmpA->expo + tmpB->expo);
         tmpB = tmpB->next;
      }
      
      tmpA = tmpA->next;
      tmpB = b.gethead();
   }

   tmpC = c.gethead();
   while (tmpC->next != NULL)
   {
      // case fench equal next 
      if (tmpC->expo == tmpC->next->expo)
      {
         tmpC->coeff = tmpC->coeff + tmpC->next->coeff;
         tmp = tmpC->next;
         tmpC->next = tmpC->next->next;
         free(tmp);
         
      }
      
      else{
         tmpC = tmpC->next;
      }
   }

   return c;
}

linked_list InputData(linked_list a){

   int coeff, expo, n;
   cout << "==========================="<< endl;
   cout << "input your term : ";
   cin  >> n; 

   for (int i = 1; i <= n; i++)
   {
      cout << "Input the coefficient of term " << i << " : ";
      cin >> coeff;
      cout << "Input the exponent of term    " << i << " : ";
      cin >> expo;

      a.add_node(coeff, expo);
   }

   return a;
   
}

void OutputData(linked_list c){
   node *tmpC;
   tmpC = c.gethead();
   cout << endl << "Result : ";

   while (tmpC != NULL)
   {
      cout << "(" << tmpC->coeff << "x^" <<  tmpC->expo << ")";
      // check last element 
      if (tmpC->next  != NULL)
      {
         cout << " + " ;
      }else{
         cout << endl;
      }
      
      tmpC = tmpC->next;
   }

}

int main()
{
   int m;
   linked_list a;
   linked_list b;
   linked_list c;

   // choose method 
   cout << endl << "Input choose method " << endl;
   cout << "--------------------" << endl;
   cout << "1.  addition " << endl;
   cout << "2.  miltiplication "  << endl;
   cout << "--------------------" << endl;
   cout << "choose : ";
   cin >> m;
   cout << endl;

   // addiition methodd 
   if (m == 1)
   {
      cout << "==========================="<< endl;

      // Input data in polynomail 
      cout << "Input first polynomail  [1]" << endl;
      a = InputData(a);
      cout << endl << "==========================="<< endl;
      cout << "Input second polynomail [2]" << endl;
      b = InputData(b);

      c = add(a, b);
      OutputData(c);
      cout << "==========================="<< endl;
   }
   
   // multiplication methodd 
   else if (m == 2)
   {
      cout << "==========================="<< endl;

      // Input data in polynomail 
      cout << "Input first polynomail  [1]" << endl;
      a = InputData(a);
      cout << endl << "==========================="<< endl;
      cout << "Input second polynomail [2]" << endl;
      b = InputData(b);

      c = multi(a, b);
      OutputData(c);
      cout << "program exit" << endl;
      cout << "==========================="<< endl;
   }
   
   // exits
   else {
      cout << "==========================="<< endl;
   }

   return 0;

}