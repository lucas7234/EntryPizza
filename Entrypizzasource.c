#include <stdio.h>
#include <time.h>
#include <string.h>
#include "entry.h"

char * pizza[6]={"감자", "고구마", "야채", "과일", "새우"};
char * drinks[6]-{"콜라", "사이다", "탄산수, "주스", "에이드"};
char username[21]

main()
{
  time_t t;
  srand(time(&t));
  //계산
  printf("저희 가게에 오신것을 환영합니다! %d! 무엇을 드시고 싶으세요?", username);
  printf("%s와 %s요!", pizza[rand()%4], drinks[rand()%4]);
}
