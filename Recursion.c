
#include<stdio.h>
void print(int i)
{
    if(i<=0)
        return ;
        printf("%d", i);
if(i < 9)
  {
      print(i+1);
  }
    printf("%d",i);

}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;

}
