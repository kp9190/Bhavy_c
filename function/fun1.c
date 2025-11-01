/*
--> we have four type of function 

--> function end () 
--> user defind
	
	function systex =>  dataType functionName() // dec
			
						int			 
						char
						float
						void

--> pre-difand 
--> dont using keyword
--> not starting number  


--> defalt function  
		1.main
		2.printf
		3.scanf
		4.clrscr
		5.getch 
		ect.
===================================================

c Struct

	documnetaion 
	Link
	definition 
	global declaration
	function
	sub fun.

-->  data Types

	void --> not holding the value 
			--> not return value
	
	int float char --> vlaue hold 
			--> return value

---> Tytpe of the Function

=> we have four type of function
	1. no arggumenrt and no returntype
	2. whit arggument and no returntype
	3. whit arggument and with returntype
	4. no arggument and with returntype

--->  what is Arggument 
	-> function pass the value

---> what is return Type
	-> function return the value  

--->  what is function calling 
	->  to using the fun. name 
	 
--> How to Creat a Function in c 
	
	int address(); // fun. dec
	
	void main(){
		address(); ----->  fun. calling 
	}


	// fun. insc
	int address(){
		printf("hello kp ! ");
	}

*/
#include<stdio.h>
#include<conio.h>

void print(); ///dec 

int main(){
	
	printf("\n---------------Befor-----------------\n");
	print(); // function calling
	printf("\n---------------After-----------------\n");
	
	
	return 0;
}


// function inc
void print(){
	printf("hello");
	printf(" kenil");
	printf(" patel");
}




