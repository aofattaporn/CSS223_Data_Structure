#include <iostream>
#include<string> 
#include <iomanip>      

using namespace std;

string name;
int point, buff = 1;

// create node 
struct node
{
   string name;
   int point;
   node *next;
   node *prev;
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

   void add_node(string name, int point)
    {
       // add to node 
         node *tmp = new node;
         tmp->name = name;
         tmp->point = point;

         tmp->next = NULL;
         tmp->prev = tmp;

         // check head nulll
        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }

         // next teil 
        else
        {
            tmp->prev = tail;

            tail->next = tmp;
            tail = tail->next;
        }
    }

   node* gethead(){
      return head;
   }

   node* gettail(){
      return tail;
   }

   void deleteNode(){
      node *tmp;
      tmp = gettail();

      cout << "-----------------------------------------" << endl;
      cout  << tail->name << "   was  remove from the score boad"<< endl;
      cout << "-----------------------------------------" << endl;
      
      tail = tail->prev;
      tmp = NULL;
   }
   
   void display_all()
   {
        node *tmp;
        tmp = head;
        for (int i = 0; i < 10; i++)
        {
            cout << "name : " << setw(10) << left << tmp->name  << right << setw(3) << tmp->point << endl;
            tmp = tmp->next;
        }

    }

};

void sort_score(linked_list score){

   node *tmpA;
   node *tmp;
   int swapped, i;
   tmpA = score.gethead(); 
   tmp = NULL;

   do
   {
      swapped = 0; 
      tmpA = score.gethead(); 

      while (tmpA->next != tmp)
      {
         if(tmpA->next->prev->point < tmpA->next->point){
            swap(tmpA->point, tmpA->next->point);
            swap(tmpA->name, tmpA->next->name);
            swapped = 1;
         }
         tmpA = tmpA->next;
      }
      tmpA = tmp;
   
   } while (swapped);
   
}

int main() {
   linked_list score;

   cout << endl << "Before Sort " << endl;
   score.add_node("Ryu", 100);
   score.add_node("Ken", 98);
   score.add_node("koy", 98);
   score.add_node("Chunli", 95);
   score.add_node("Sagat", 94);
   score.add_node("Aof", 100);
   score.add_node("Eart", 20);
   score.add_node("Thun", 80);
   score.add_node("Earn", 10);
   score.add_node("Bam", 0);
   cout << "--------------------------- " << endl;
   score.display_all();
   cout << "--------------------------- " << endl;

   cout << endl << "After Sort " << endl;
   cout << "--------------------------- " << endl;
   sort_score(score);
   score.display_all();
   cout << "============================ " << endl;

   cout << "1 : add a new score" << endl;
   cout << "2 : exit program" << endl;
   cout << "choose :  ";
   cin >> buff;
   cout << "--------------------------- " << endl;
   while (buff == 1 )
   {
      cout << "Input name  : ";
      cin >> name;

      cout << "Input point : ";
      cin >> point;

      score.add_node(name, point);
      sort_score(score);
      score.display_all();
      score.deleteNode();
      
      cout << "--------------------------- " << endl;
      cout << "1 : add a new score" << endl;
      cout << "2 : exit program" << endl;
      cout << "choose :  ";   
      cin >> buff;  
      cout << "--------------------------- " << endl;
 
      
   }

   cout << "exit program." << endl;

}
