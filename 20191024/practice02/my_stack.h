#pragma once

#include <iostream>

typedef struct 
{
	int key;
	/* other data types */
  char ch;
} Element;

typedef struct 
{
	Element *stack;		/* for dynamically allocated array */
   	int max_size;		/* maximum size */
	int top;			/* stack top */
} Stack;

// Creation
Stack* CreateStack(int max_stack_size);

// Transform
Stack* DuplicateStack(Stack* original);

// Report
bool IsFullStack(Stack *s);

bool IsEmptyStack(Stack *s);

// Operation on Stack
void Push(Stack *s, Element item);

Element Pop(Stack *s);

// Destruction
void DestroyStack(Stack *s);

// Utility
void PrintStack(Stack *s);
void PrintChStack(Stack *s);