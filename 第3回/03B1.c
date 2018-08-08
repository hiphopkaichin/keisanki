#include <stdio.h>

int main()
{
  int year;
  
  printf("西暦を入力してください:");
  
  scanf("%d",&year);
  
  if(year<1926 | 2017<year)
  {
    printf("入力は 1926 と 2017 の間にしてください。\n");
  }
  else if(year<1989)
  {
    if(year == 1926)
    {
      printf("昭和元年です。\n");
    }
    else
    {
      printf("昭和 %d 年です。\n",year-1925);
    }
  }
  else
  {
    if(year==1989)
    {
      printf("平成元年です。\n");
    }
    else
    {
      printf("平成 %d 年です。\n",year-1988);
    }
  }
  return 0;
}
