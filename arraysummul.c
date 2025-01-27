
#include<stdio.h>
int main()
{
  int i;
  int sum=0;
  int prod=1;
  int n;//number of elements in the arrray
  
  printf("Enter the num of elements in the array: ");
  scanf("%d",&n);
  int a[n];

  printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++) {
    printf("Element %d: ", i + 1);
    scanf("%d", &a[i]);
   }

  // Print the elements
  printf("The elements in the array are:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
    }
    printf("\n");

    //for addition & multiplication
    for(i=0;i<n;i++){
      if(a[i]%2==0){
        sum+=a[i];
      }
      else{
        prod*=a[i];
      }
    }

    printf("Thesum is: %d\n",sum);
    //scanf("%d",&sum);
    printf("The product is %d\n",prod);
    //scanf("%d",&prod);
    
      
return 0;

}
