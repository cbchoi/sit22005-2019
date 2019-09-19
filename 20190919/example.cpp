#include <iostream>

int main()
{
	return 0;
}

/*
int num[100];
 -> int type -> element가 4byte다. 
 -> count -> 100. 4 * 100: 400 byte

 --------------------------------------
 | | | ...                            |
 --------------------------------------

 int num[100][100];
 ---
 type: 4 byte integer number
 base address -> identifier: num

 int (num[100])[100];
     ----------
         A
int A[100]; integer element -> 100 개 ------- 1

A -> base Address -------- 2
A <=> num[100] ------> base Address를 원소로 가지는 배열  
num -> base address
num[0] ==> A[100]의 element로 접근가능하다. 
*/