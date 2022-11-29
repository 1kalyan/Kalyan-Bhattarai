#include<stdio.h>

int main(){
	
   int a[10],b[10],i,c[10],d[10],e[10],j,k=0,n1,n2,l=0,x,y,z;

   // taking input set A

   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

    // taking input set B

   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

   // logic for calculate union

   // copy the element of set A in set C
   for(i=0;i<n1;i++)
   {
       // repeted element is not allowed so we check is any value repeted
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) //if not repesated then store value in set c 
       {
          c[k]=a[i];
          k++;
       }
    }
    // copy element of set B in set C
   for(i=0;i<n2;i++)
   {
       // check for repeted element
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) // if element is not repeted then store in set C
     {
       c[k]=b[i];
       k++;
     }
   }

   // printing of union of set A and set B
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);

// Logic for intersection
    
    for( i=0;i<n1;i++)
    {
         for(j=0;j<n2;j++)
         {
            if(a[i]==b[j])
            {
                c[l]=a[i];
                l++;
            }
         }
        
    }
    
    // Printing the elements of intersection of set A and set B
    printf("\nIntersection of set A and set B is:-\n");
    for(i=0;i<l;i++)
      printf("%d ",c[i]);
      
      
      
    // logic for find A-B
    
    for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
          // here we check that is element already present in the set 
          // if present than ignore it otherwise add to the difference set   
            for(x=0;x<y;x++)
            {
                if(e[x]==a[i])
                 break;
            }
            if(x==y)
            {
                e[y]=a[i];
                y++;
            }
        }
        
    }
    
    // logic for find B-A
    
    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
          // here we check that is element already present in the set 
          //if present than ignore it otherwise add to the difference set
            for(x=0;x<z;x++) 
            {
                if(d[x]==b[i])
                 break;
            }
            if(x==z)
            {
                d[z]=b[i];
                z++;
            }
        }
        
    }
     printf("Difference of A-B is:-\n");
     for(i=0;i<y;i++)
     {
         printf("%d ",e[i]);
     }
     printf("\n");
     printf("Difference of B-A is:-\n");
     for(i=0;i<z;i++)
     {
         printf("%d ",d[i]);
     }
      
	return 0;
	
	
	
}
