    #include<stdio.h>  
      
    void swap(int, int);  
      
    int main()  
    {  
        int a, b;  
      
        printf("Enter values for a and b:\n");  
        scanf("%d%d", &a, &b);  
      
        printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
      
        swap(a, b);  
      
        return 0;  
    }  
      
    void swap(int x, int y)  
    {  
        int temp;  
      
        temp = x;  
        x    = y;  
        y    = temp;  
      
        printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
    }  


/*Enter values for a and b:
6 7


Before swapping: a = 6 and b = 7

After swapping: a = 7 and b = 6*\

