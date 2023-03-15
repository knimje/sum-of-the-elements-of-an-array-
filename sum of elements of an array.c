#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int m,sum=0;
printf("how many elements are there in an array ");
scanf("%d\n",&m);
int arr[m];
for(int i=1;i<m;i++)
{
    scanf("%d ",&arr[i]);
    sum =sum + arr[i];
}
printf("The sum of the array is %d",sum);  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;


}


