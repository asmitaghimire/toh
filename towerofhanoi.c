/*
Tower of Hanoi
Asmita Ghimire
referense- data structure book
*/

#include<stdio.h>

void towers (int, char, char, char);

void main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	towers (n, 'A', 'C', 'B');
}

void towers (int n, char frompeg, char topeg, char auxpeg)
{
	if (n==1)
	{
		printf("\n%s%c%s%c","move disk 1 from peg", frompeg, "to peg", topeg);
		return;
	}
	towers (n-1, auxpeg, topeg, frompeg);
	printf("\n%s%c%s%c", "move disk", n, "from peg", frompeg, "to peg", topeg);
	towers (n-1, auxpeg, topeg, frompeg);
}

