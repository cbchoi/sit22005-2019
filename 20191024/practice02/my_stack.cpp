#include "my_stack.h"

// Creation
Stack* CreateStack(int max_stack_size)
{
    /* dynamically allocate data structure */
    Stack *s = new Stack; 
    /* dynamically allocate elements */
    s->stack = new Element[max_stack_size];
    s->max_size = max_stack_size;
    /* Initially top points to -1 */
    s->top = -1;
    return s;

}

// Transform
Stack* DuplicateStack(Stack* original)
{
    Stack *s = CreateStack(original->max_size); /* Create stack */
    s->max_size = original->max_size;
    s->top = original->top;
    for(int i = 0; i < s->top+1; i++)
         s->stack[i] = original->stack[i];                               /* Clone the elements */
    return s;

}

// Report
bool IsFullStack(Stack *s)
{
   if(s->top == s->max_size - 1) 
        return 1;
   else 
        return 0;

}

bool IsEmptyStack(Stack *s)
{
   if(s->top < 0) 
        return 1;
   else 
        return 0;
}

// Operation on Stack
void Push(Stack *s, Element item)
{
   if(IsFullStack(s)) 
     /* prints an error message */
      std::cout << "Stack Full" << std::endl;	
   else {
      s->stack[++s->top] = item;
   }

}

Element Pop(Stack *s)
{
   if(IsEmptyStack(s)) 
   {
   	/* prints an error message */
   	  std::cout << "Stack Empty" << std::endl;
   	  return Element();	
   }   
   else {
      return s->stack[s->top--];
   }

}

// Destruction
void DestroyStack(Stack *s)
{
     delete [] s->stack;
     delete s;
     s = nullptr;
}

// Utility
void PrintStack(Stack *s)
{
  std::cout << "----------------------------\n|";
  for(int i = 0; i < s->top+1; i++)
  {
    std::cout << s->stack[i].key << "|";
  }
  std::cout << "\n----------------------------" << std::endl;
}

void PrintChStack(Stack *s)
{
  std::cout << "----------------------------\n|";
  for(int i = 0; i < s->top+1; i++)
  {
    std::cout << s->stack[i].ch << " ";
  }
  std::cout << "\n----------------------------" << std::endl;
}