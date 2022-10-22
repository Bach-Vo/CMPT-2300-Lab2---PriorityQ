

#include "PriorityQ.hpp"


int main()
{
   
    PriorityQ<char> newQueu;
    
  
    newQueu.enqueue('c', 2);
    
     char x = newQueu.peek();
    
    std::cout << x;
   
    newQueu.enqueue('p', 1);
    
    x = newQueu.peek();
    
    std::cout << x;
    
}
