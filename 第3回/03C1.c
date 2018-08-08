#include <stdio.h>

int main()
{
  int number,number2,year,numbertech;
  
  scanf("%d",&number);
  
  numbertech = number / 10000000;
  
  if(number<10000000)
  {
    printf("学生番号エラー (桁数が足りない)\n");
  }
  else if(number>99999999)
  {
    printf("学生番号エラー (桁数が多すぎる）\n");
  }
  else if(numbertech=15)
  {
    number = number - 15000000;
    if(number<100000)
    {
      printf("学生番号エラー (3桁目が0のため)\n");
    }
    else
    {
      number2 = number / 100000;
      year = (number - number2*100000) / 1000;
      if(year>64)
      {
        year = 1900 + year;
      }
      else
      {
        year = 2000 + year;
      }
      switch(number2)
      {
        case 1:
          printf("物理・数理学科 %d 年度入学の生徒",year);
          break;
        case 2:
          printf("化学・生命科学科 %d 年度入学の生徒",year);
          break;
        case 3:
          printf("機械工学科 %d 年度入学の生徒",year);
          break;
        case 4:
          printf("電気電子工学科 %d 年度入学の生徒",year);
          break;
        case 5:
          printf("経営工学科 %d 年度入学の生徒",year);
          break;
        case 6:
          printf("機械創造工学科 %d 年度入学の生徒",year);
          break;
        case 7:
          printf("経営システム工学科 %d 年度入学の生徒",year);
          break;
        case 8:
          printf("情報テクノロジー学科 %d 年度入学の生徒",year);
          break;
        case 9:
          printf("聴講生 %d 年度入学の生徒",year);
          break;
      }
    }
     printf("理工学部の学生ではありません (最初の2桁が15でないため)\n"); 

  }
  return 0;
}
