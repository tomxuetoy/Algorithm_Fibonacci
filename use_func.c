int f(int n)  
{  
    if(n<=1)
	return 1;  
    else     
	return  f(n-1) + f(n-2);  
}
      
int main()  
{  
    int result;  
    int i;  
      
    for(i=0; i < 40; i++){  
	result = f(i);  
	printf("%d\n", result);  
    }  
}  
