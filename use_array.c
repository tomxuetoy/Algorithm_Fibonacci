int arr[40];  
int f(int n)  
{  
    int result;  
    if(n <= 1)  
    	result = 1;  
    else
    	result = arr[n-1] + arr[n-2];  
      
    arr[n] = result;   
    return result;  
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
