    #include<stdio.h>  
    int main()  
    {  
        int n,a[n],r[n],j=0,i;  
        printf("Enter the size of the array:");  
        scanf("%d",&n);  
        printf("Enter the elements:");  
        for(i=0;i<n; i++){
            scanf("%d",&a[i]);  
        }    
        for(i=n-1;i>=0;i--){
            r[j] = a[i];  
            j++;  
        }  
        printf("The Reversed array: ");  
        for(i=0; i<n; i++){
            printf("%d",r[i]);  
        }  
    }
