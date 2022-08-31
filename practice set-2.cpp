#include<stdio.h>
//q32--print  helloworld 5 times using recursion 
//
//void printfinfo(int count);
//int main(){
//	
//printfinfo(5);
//	return 0;
//}
//void printfinfo(int count){
//	if(count == 0){
//		return;
//	}
//	printf("helloworld\n");
//	printfinfo(count -1);
//}


//q-30 -- sum of first n natural numbers using recursion
//int sum(int n);
//int main(){
//	printf("%d",sum(5));
//	return 0;
//}
//int sum(int n){
//	if(n==1){
//		return 1;
//	}
//	int sumn=sum(n-1)+n;
//	return sumn;
//}

//repeated question
//q--33  find factorial of n using recursion
//int fact(int n);
//int main(){
//	printf("factorial:%d",fact(5));
//	
//	return 0;
//}
//int fact(int n){
//	if(n==0){
//		return 1;
//	}
//	int factn =fact(n-1) * n;
//	return factn;
//}

//q34 wite a function to convert celsius to farenheit
//f = c*(9/5)+ 32
//float convert(float n);
//int main(){
//	float c;
//	printf("enter the celsius degree:");
//	scanf("%f",&c);
//	printf("temerature in farenheit:%f",convert(c));
//	return 0;
//}
//float convert(float n){
//	float f = n*(9.0/5.0)+32.0;
//	return f;
//	
//}

//q-35---cal the per of student from marks maths,science,sanskrit
//int cal(int m,int s,int san);
//int main(){
//	int m,s,san;
//	printf("enter the marks in maths:");
//	scanf("%d",&m);
//	printf("enter the marks in science:");
//	scanf("%d",&s);
//	printf("enter the marks in sanskrit:");
//	scanf("%d",&san);
//	printf("percentage of the student is:%d",cal(m,s,san));
//	return 0;
//}
//int cal(int m,int s,int san){
//	int per=((m+s+san)/3);
//	return per;
//	
//}



//q--36 --write a funcction to print n terms of fibanacci series
//int fib(int n);
//int main(){
//	int n;
//	printf("enter the n th nuumber:");
//	scanf("%d",&n);
//	printf("%d",fib(n));
//	return 0;
//}
//int fib(int n){	
//		if(n==0){
//			return 0;	
//	   }
//	   if(n==1){
//		return 1;
//     	}
//	int fibn= fib(n-1)+fib(n-2);
////	printf("%d\t",fibn);
//	return fibn;
//	
//}




//q--37 print the value of i from its pointer tot pointer
//int main(){
//	int i=5;
//	int *ptr = &i;
//	int **pptr = &ptr;
//	printf("%d",**pptr);
//	return 0;
//}


//q-38--swap two numbers a and b
//int main(){
//	int a=2,b=3;
//	int temp;
//	printf("a and b:%d,%d\n",a,b);
//	temp = a;
//	a=b;
//	b=temp;
//	printf("a and b:%d,%d",a,b);
//	return 0;
//}


//q40--write a func to cal sum,product,average of two numbers with pointers
//void cal(int a,int b,int *sum,int *pro,int *avg);
//int main(){
//	int x,y,sum,avg,pro;
//	printf("enter the first number:");
//	scanf("%d",&x);
//	printf("enter the second number:");
//	scanf("%d",&y);
//	cal(x,y,&sum,&pro,&avg);
//	printf("sum:%d\n",sum);
//	printf("product:%d\n",pro);
//	printf("average:%d\n",avg);
//	return 0;
//}
//void cal(int a,int b,int *sum,int *pro,int *avg){
//	*sum = a+b;
//    *avg= (a+b)/2;
//    *pro = a*b;
//	
//	
//}


//q41--write a program to enter the price of three items and print their cost with gst
//int main(){
//	int arr[3];
//	printf("enter the price of first item:");
//	scanf("%d",&arr[0]);
//	printf("enter the price of second item:");
//	scanf("%d",&arr[1]);
//	printf("enter the price of third item:");
//	scanf("%d",&arr[2]);
//	int total=arr[0]+arr[1]+arr[2];
//	int gst = total*0.10;
//	float final=total+gst;
//	printf("%f",final);
//	return 0;
//}



//q--42 write a function to count the odd numbers in an array
//int main(){
//	int n=10;
//	int count=0;
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	for(int i=0;i<=n;i++){
//		if(arr[i]%2 != 0){
//			count++;
//			printf("%d\n",arr[i]);
//		}
//		
//	}
//	printf("count:%d",count);
//	
//	
//	
//	return 0;
//}


//q43--optional

///q44-- write an function to reverse an array
//void reverse(int arr[20],int s);
//void print(int arr[20],int s);
//int main(){
//	int arr[]={1,2,3,4,5};
//	int s;
//	reverse(arr,5);
//	print(arr,5);
//	return 0;
//}
//void reverse(int arr[20],int s){
//	
//	for(int i=0;i<s/2;i++){
//	int fnum = arr[i];
//	int lnum = arr[s-1-i];
//	arr[i]=lnum;
//	arr[s-1-i]=fnum;	
//	}	
//}
//void print(int arr[20],int s){
//	
//	for(int i=0;i<s;i++){
//		printf("%d\t",arr[i]);
//	}
//}


//q45 write a fuc to store first n numbers of fibanacci nums
//int main(){
//	int n; 
//	printf("enter the first nth numbers:");
//	scanf("%d",&n);
//	int fib[n];
//	fib[0]=0;
//	fib[1]=1;
//	printf("%d\t",fib[0]);
//	printf("%d\t",fib[1]);
//    for(int i=2;i<n;i++){
//    	fib[i]= fib[i-1] + fib[i-2];
//		printf("%d\t",fib[i]);
//	}
//	return 0;
//}
//
//	

//q46--create a 2d array storing the tables of 2 and  3
//int main(){
//	int arr[2][10];
//	for(int i=0;i<10;i++){
//			arr[0][i]= 2 * (i+1);
//			printf("%d\n",arr[0][i]);	
//		}
//	printf("\n");
//	for(int i=0;i<10;i++){
//		arr[1][i]= 3 * (i+1);
//		printf("%d\n",arr[1][i]);
//	}
//	return 0;
//}



//q47---create a string of first name and last name of user and print the characters using loop
#include<string.h>
//int main(){
//	char fname[20];
//	char lname[20];
//	printf("enter the first name:");
//	scanf("%s",&fname);
//	printf("enter the last name:");
//	scanf("%s",&lname);
//	strcat(fname,lname);
//	int l=strlen(fname);
//	for(int i=0;i<=l;i++){
//		printf("%c",fname[i]);
//	}
//	return 0;
//}

//q48----ask the user to enter first name and print it to them
//int main(){
//	char fname[20];
//	printf("enter the first name:");
//	fgets(fname,20,stdin);
//	puts(fname);
//	return 0; 
//}


//q--49
//make a prog that inputs a username and print its length
//int main(){
//	char name[]="sai kiran reddy";
////	printf("enter your name:");
////	fgets(name,20,stdin);
//
//    printf("length of the string:%d",strlen(name));
//	return 0;
//}


//q-50--take a string input from user using %c
//int main(){
//	char name[30];
//	printf("enter your name:");
//	for(int i=0;name[i] != '\n';i++){
//		scanf("%c",&name[i]);
//		printf("%c",name[i]);
//		
//	}
//	return 0;
//}



//q51--find the salted form of password where salt is 123 and add it to last
//int main(){
//	char pass[20];
//	char salt[]="123";
//	printf("enter the password:");
//	scanf("%s",&pass);
//	strcat(pass,salt);
//	printf("%s",pass);
//	return 0;
//}


//q52---slicing a string from n to m
//void slice(int n,int m,char name[20]);
//int main(){
//	char name[]="saikiranreddy";
//	slice(4,8,name);
//	return 0;
//}
//void slice(int n,int m,char name[20]){
//	
//	for(int i=n;i<=m;i++){
//		printf("%c",name[i]);
//	}
//}

//q53-- write a function to find a ocuureence of a string
//int main(){
//	char name[]="saikiran";
//	int count;
//	int l= strlen(name);
//	for(int i=0;i<l;i++){
//		if(name[i] =='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
//		{
//			count++;
//		}
//	}
//	printf("%d",count);
//	return 0;
//}

//q54--to check whether a given char is in string or not
//int main(){
//	char ch;
//	char name[]="saikiranreddy";
//	printf("enter the character:");
//	scanf("%c",&ch);
//	int l= strlen(name);
//	for(int i=0;i<l;i++)
//	{
//	  if(ch == name[i])
//	  {
//	  	printf("the character is present");
//	  	break;
//	  }
//	  else{
//	  	printf("the character is not present");
//	  	break;
//	  }
//	}
//	return 0;
//}


//q55 write a structure to store the data of three students
//struct student{
//	int age;
//	float cgpa;
//	char name[20];
//};
//struct student s1={20,8.2,"saikiran"};
//struct student s2={22,8.0,"kamal"};
//struct student s3={21,7.8,"vamsi"};
//int main(){
//	printf("age of second student:%d",s2.age);
//		
//	return 0;
//}

//q56--optional





