#include<stdio.h>
//q1--area of the square
//int main(){
//	int s;
//	printf("enter the length of the side:");
//	scanf("%d",&s);
//	printf("area of square:%d",s*s);
//	return 0;
//}



//q2-----area of the circle

//int main(){
//	int r;
//	printf("enter the radius of the circle:");
//	scanf("%d",&r);
//	printf("area of the circle:%f",3.14*r*r);	
//	return 0;
//}


//q3------solve 

//int main(){
//	int a=(int) 1.999;
//	printf("%d",a);
//	
//	
//	return 0;
//}


//q4---solve
//int main(){
//	printf("%d\n",5*2-2*3);
//	printf("%d\n",5*2/2*3);
//	printf("%d\n",5*(2/2)*3);
//	printf("%d\n",5+2/2*3);
//	return 0;
//}




//q5----to check a number is divisible by 2 or not
//int main(){
//	int n;
//	printf("enter the number:");
//	scanf("%d",&n);
//	if(n % 2== 0)
//	{
//		printf("the number %d is divisible by 2",n);
//	}
//	else{
//		printf("it is not divisible by 2");
//	}
//	return 0;
//}




//q6----to check a number is odd or even

//int main(){
//	int n;
//	printf("enter the number:");
//	scanf("%d",&n);
//	
//	if(n==0){
//		printf("invalid");
//	}
//	else if(n%2==0){
//		printf("it is even");
//	}
//	else{
//		printf("it is odd");
//	}
//	
//	
//	return 0;
//}

//q7--optional

//q8---
//it is a sunday-n 
//it is snowind-m
//if its monday -a
//if it is raining-b
// if a number is greater than 9 and less than 100

//int main(){
//	int n=1,m=1;//1-true 0--false
//	printf("%d\n",n && m);
//	int a=1,b=0;
//	printf("%d\n",a || b);
//	int p;
//	printf("enter the number:");
//	scanf("%d",&p);
//	printf("%d",p>9 && p<100);	
//return 0;
//}


//q9--to check a student passed or failed
//int main(){
//	int marks;
//	printf("enter the marks:");
//	scanf("%d",&marks);
//	(marks>30)?printf("passed"):printf("failed");
//	
//	
//	return 0;
//}



//q10--to give grades to students
//
//int main(){
//	int m;
//	printf("enter the marks:");
//	scanf("%d",&m);
//	if(m<30)
//	{
//	 printf("grade c");
//	}
//	else if(m>=30 && m<70){
//		printf("grade b");
//	}
//	else if(m>=70 && m<90){
//		printf("grade a");
//	}
//	else if(m>=90 && m<=100){
//		printf("grade a+");
//	}
//	else{
//		printf("invalid marks");
//	}
//	
//	return 0;
//}

//q11-optional




//q12--to find it is a uppercase or lower case
//int main(){
//	char ch;
//	printf("enter the character: ");
//	scanf("%c",&ch);
//	if(ch >= 'a' && ch <= 'z')
//	{
//		printf("it is a lowercase character");
//	}
//	else if(ch >='A' && ch<='Z')
//	{
//		printf("it is uppercase character");
//	}
//	
//	
//	
//	return 0;
//}


//q13---print the numbers from 1 to 10

//int main(){
//	for(int i=1;i<=10;i++)
//	{
//		printf("%d\n",i);
//	}
//	
//	return 0;
//}



//q14---numbers from 0 to n,n is given by user
//int main(){
//	int n;
//	printf("enter the number:");
//	scanf("%d",&n);
//	int i=0;
//	while(i<=n){
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//} 


//q15---print the sum of first natural numbers
//int main(){
//	int n;
//	printf("enter the nth nummber:");
//	scanf("%d",&n);
//	int sum=0;
//	for(int i=0;i<=n;i++)
//	{	
//		sum+=i;
//	}
//	printf("sum of n numbers is:%d",sum);
//	
//	
//	return 0;
//}


//q16----print the table of a number input by the user
//int main(){
//	int n;
//	printf("enter the number:");
//	scanf("%d",&n);
//	for(int i=1;i<=10;i++)
//	{
//		printf("%d * %d = %d\n",n,i,n*i);
//	}
//	return 0;
//}


//q17----keep taking inputs untill  user enters a odd number
//int main(){
//	int n;
//	printf("enter the number:");
//	for(int i=n;i<=n;i++){
//		scanf("%d",&n);
//		if(n%2 != 0)
//		{
//			break;
//		}	
//	}
//	return 0;
//} 




//q-18-----taking inputs untill user enters a multiple of 7
//int main(){
//	int n;
//	printf("enter the number:");
//	for(int i=0;i<=n;i++)
//	{
//      scanf("%d",&n);
//	  if(n==0){
//	  	printf("enter the numbers from 1");
//           
//	  }	
//       else if(n%7 == 0)
//      {
//      	break;
//	  }
//	}
//	return 0;
//}



//q19----print all numbers from 1 to 10 expect 8
//int main(){
//	for(int i=1;i<=10;i++){
//		if(i==8)
//		{
//			continue;
//		}
//		printf("%d\n",i);
//	}
//	
//	return 0;
//}


//q-20---print the odd numbes from 5 to 50
//int main(){
//	for(int i=5;i<=50;i++){
//		if(i%2 != 0)
//		{
//		printf("%d\n",i);
//		}
//		
//	}	
//	return 0;
//}



//q21--factorial of a number

//int main(){
//	int n;
//	int fact=1;
//	printf("enter the number:");
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		if(n==0){
//			printf("factorial is 1");
//		}
//		fact*=i;	
//	}
//	printf("%d",fact);
//	
//	return 0;
//}



//q22--print reverse of a table
//int main(){
//	int n;
//	printf("enter the number:");
//	scanf("%d",&n);
//	for(int i=10;i>=1;i--)
//	{
//		printf("%d * %d = %d\n",n,i,n*i);
//	}
//	
//	return 0;
//}





//q23---print he sum of all numbers between 5 and 50 including them

//int main()
//{
//	int sum=0;
//	for(int i=5;i<=50;i++){
//		sum+=i;
//	}
//	printf("sum is:%d",sum);
//	return 0;
// } 




//q24----print the pattern
//int main(){
//	for(int i=1;i<=5;i++){
//		for(int j=1;j<=5;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}



//q25----to check a number is prime or not            ----wrong
//void primeornot(int n);
//int main()
//{
//	int number;
//	printf("enter the number that you wanted to check");
//	scanf("%d",&number);
//	primeornot(number);
//	return 0;
//}
//void primeornot(int n){
//	if(n==0 || n==1){
//		printf("it is not prime number");
//	}
//	else{
//	
//	for(int i=2;i<=n;i++){
//		if(n%i==0){
//			printf("it is not a prime number");
//		}
//		else{
//			printf("it is a prim");
//		}	
//}
//
//}

//q26---program to print prime numbers in a range


//q27---write two functions 1)to print hello 2)to print good bye
//void print1();
//void print2();
//int main(){
//	print1();
//	print2();
//	return 0;
//}
//void print1(){
//	printf("hello\n");
//}
//void print2(){
//	printf("good bye\n");
//}



//q28-----write a function to print namaste if user is indian and bonjour for french 
//void greet(char s);
//int main()
//{
//	char s;
//	printf("type i for indian and f for french:");
//	scanf("%c",&s);
//	greet(s);
//	
//	return 0;
//}
//void greet(char s){
//	if(s=='i'){
//		printf("namaste");
//	}
//	else if(s=='f'){
//		printf("bonjour");
//		
//	}
//	else{
//		printf("invalid");
//	}
//	
//}



//q29-----use library func to cal the square of num
#include<math.h>
//int main(){
//	int n;
//	printf("enter the number:");
//	scanf("%d",&n);
//	printf("%f",pow(n,2));
//	return 0;
//}

//q30 in set-2

//q31----write functions to cal area of square ,circle and rectangle
//void square();
//void circle();
//void rectangle();
//int main(){
//	square();
//	circle();
//	rectangle();
//	
//	
//	return 0;
//}
//void square(){
//	int s;
//	printf("enter the length of side:");
//	scanf("%d",&s);
//	printf("area of square:%f\n",pow(s,2));	
//}
//void circle(){
//	int r;
//	printf("enter the radius of the circle:");
//	scanf("%d",&r);
//	printf("area of circle %f\n",3.14*r*r);
//}
//void rectangle(){
//	int l,b;
//	printf("enter the length:");
//	scanf("%d",&l);
//	printf("enter the breadth:");
//	scanf("%d",&b);
//	printf("area of rectangle:%d",l*b);
//}

