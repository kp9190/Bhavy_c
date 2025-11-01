// whit arggument and no returntype
/*
datatype(int char float)  ===> return the value (get the value in new varabale)

datatype functionName(arggument,.....){
	function body
}


functioName(arggumnrt,.....); // function calling
*/
#include<stdio.h>

void mult(char x,int y){
	
	print();
	printf("X : %c\nY : %d",x,y);
	print();
}

void print(){
	printf("\nhello");
	printf(" kenil");
	printf(" patel");
}


int main()
{
	int num1,num2,num3;
	
	printf("Enter the num1 and num2 : ");
	scanf("%d%d",&num1,&num3);
	printf("\nnum1 : %d\nnum2 : %d",num1,num3 );
	
	mult(num1,num3);// calling 

 return 0;
}



//===========================================================================================================
// no arggumnet no returntype

/*
#include<stdio.h>

void scanfun(){
	int num1;
	
	printf("\nEnter the number  : ");
	scanf("%d",&num1);
	
	if(num1%2==0){
		printf("Number is Even");
	}else{
		printf("Number is Odd");
	}

}

int main()
{
	int num1;
	printf("Enter the  find the number : ");
	scanf("%d",&num1);
	
	
	for(int i=0; i<num1; i++){
		scanfun();// fun. calling 
	}	
	
	
 return 0;
}
*/