#include<stdio.h>
#include<math.h>
int input_number()
{
    int n;
    printf("\nenter a number");
    scanf("%d", &n);
    return n;
}
int is_composite(int n){
    int i;
    int flag=1;
    for (i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
        else if(n%i != 0){
            flag=1;
        }
    }
    return flag;
}
void output(int n, int result)
{
if(result == 0)
     {
     printf("The number %d is composite\n", n);
      }
      else
      {
        printf("The number %d is not composite\n", n);
        }
}
int main(){
    int num = input_number();
    int res = is_composite(num);
    output(num,res);
    return 0;
}