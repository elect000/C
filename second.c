// this file use for learning C

/* #include <stdio.h> */
/* int main (void) { */
/*   int data; */
/*   scanf ("%d" , &data); */
/*   printf ("%d\n", data); */
/*   return 0; */
/*     } */

/* #include <stdio.h> */
/* int main (void) { */
/*   double data; */
/*   scanf	("%lf", &data); */
/*   printf("%f\n", data); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int data1, data2; */
/*   scanf ("%d%d", &data1,&data2); */
/*   printf("%d , %d\n",data1 ,data2 ); */
/*   return 0;   */
/* }  */

/* #include <stdio.h> */
/* int main (void) { */
/*   int data1, data2; */
/*   scanf ("%d,%d", &data1, &data2); */
/*   printf ("%d , %d\n", data1, data2); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int min, max, sum; */
/*   printf ("Please input min and max as integer (ex. 1,20) : "); */
/*   scanf("%d,%d", &min, &max); */
/*   sum = (min + max) * (max - min + 1) / 2; */
/*   printf("from %d to %d : %d\n", min, max, sum); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int suuti = 10; */
/*   if (suuti) { */
/*     printf("%d\n", suuti); */
/*   } */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int suuti; */
/*   scanf ("%d", &suuti); */
/*   if (suuti - 10) { */
/*     printf("This is not 10\n"); */
/*   } */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int suuti; */
/*   scanf ("%d", &suuti); */
/*   if (suuti == 10) { */
/*     printf ("This is 10. \n"); */
/*   } */
/*   return 0; */
/* } */

/* #include <stdio.h> */

/* int main (void) { */
/*   int suuti; */
/* scanf ("%d", &suuti); */
/*  if (suuti == 10) { */
/*    printf("This is 10\n"); */
/*  } */
/*  if (suuti != 10) { */
/*    printf("This is not 10\n"); */
/*  } */
/*  return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int suuti; */
/*   scanf	("%d", &suuti); */
/*   if (suuti == 10) { */
/*     printf ("This is 10\n"); */
/*   } */
/*   if (suuti > 10) { */
/*     printf("This is more than 10\n"); */
/*   } */
/*   if (suuti < 10) { */
/*     printf("This is less than 10\n"); */
/*   } */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int suuti; */
/*   scanf("%d", &suuti); */
/*   if (suuti >= 8 && suuti <= 12) { */
/*     printf ("This number is between 8 to 12 \n"); */
/*   } */
/*   else { */
/*     printf("This number is not between 8 to 12\n"); */
/*   } */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int score; */
/*   scanf ("%d" , &score); */
/*   if (score > 100) { */
/*     printf("This is more than 100. Huh?\n"); */
/*     score = 100; */
/*   }		 */
/*   printf("Your score is %d\n", score); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int suuti; */
/*   scanf ("%d", &suuti); */
/*   if (suuti == 10) { */
/*     printf("This is 10\n"); */
/*   } */
/*   else { */
/*     printf("This is not 10\n"); */
/*   } */
/*   return 0; */
/* } */

/* #include <stdio.h> */

/* int main (void) { */
/*   int age; */
/*   printf ("Age: "); */
/*   scanf	("%d", &age); */
/*   if (age <= 3) { */
/*     printf ("Baby: Free \n"); */
/*   } */
/*   else if (age <= 12) { */
/*     printf("Child: \\250\n"); */
/*   } */
/*   else { */
/*     printf("Adult: \\400\n"); */
/*   } */
/*   return 0; */
/*     } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int no; */
/*   scanf("%d", &no); */
/*   switch (no) { */
/*   case 1: { */
/*     printf("Nobi Nobita\n"); */
/*     break; */
/*   } */
/*   case 2:{ */
/*     printf("Minamoto Shizuka\n"); */
/*     break; */
/*   } */
/*   case 3:{ */
/*     printf("Gouda Takeshi\n"); */
/*     break; */
/*   } */
/*   case 4: { */
/*     printf("Honekawa Suneo\n");	 */
/*     break; */
/*   } */
/* default: */
/*   printf("There are not such No.\n"); */
/*     break; */
/*   } */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int no; */
/*   scanf ("%d", &no); */
/*   switch (no){ */
/*   case 1: {} */
/*   case 3:{} */
/*   case 4:{} */
/*     printf("Man\n"); */
/*     break; */
/*   case 2: { */
/*     printf ("Femail\n"); */
/*     break; */
/*   } */
/*   default:{ */
/*     printf("No such No.\n"); */
/*     break; */
/*   } */
/*   } */
/*   return 0; */
/* } */
 
/* #include <stdio.h> */
/* int main (void) { */
/*   int i; */
/* for (i = 0; i < 10; i++) { */
/*   printf("%02d times \n",i+1); */
/*  } */
/*  return 0; */
/*     } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int i; */
/* for (i = 0; i < 10; i++) { */
/*   printf("%d\n", i+1); */
/*   if (i == 2) { */
/*     break; */
/*   } */
/*  } */
/*  return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int x, y; */
/*   for (x = 1; x < 10; x++) { */
/*     for (y = 1; y < 10; y++) { */
/*       printf("%3d", x * y); */
/*     } */
/*     printf("\n"); */
/*   } */
/*   return 0; */
/*     } */

/* #include <stdio.h> */

/* int main (void) { */
/*   double money = 1; */
/*   int month = 1; */
/*   while (money < 1000000) { */
/*     printf("%02d 月目 : %7.0f 円\n", month, money ); */
/*     money *= 2; */
/*     month++; */
/*  } */
/*   printf("%02d 月目に %7.0f 円になり、100万円を超える\n", month, money); */
/*   return 0; */
/* }		 */

/* #include <stdio.h> */

/* int main (void) { */
/*   int r; */
/*   double s; */
/*   do { */
/*     printf("半径?:"); */
/*     scanf("%d", &r); */
/*     if (r < 0) { */
/*     printf("半径は負の値になりません。\n"); */
/*     } */
/*   }while (r < 0); */
/*   s = r * r * 3.14; */
/*   printf("面積は %f です。\n", s); */
/*   return 0; */
/* }	 */

/* #include <stdio.h> */

/* int sum(void){ */
/*   printf("%d\n",(1 + 100) * 100 / 2 ); */
/*   return 0; */
/* } */

/* int main (void) { */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int sum (void); */

/* int main(void) */
/* { */
/*   sum(); */
/*   return 0; */
/* } */

/* int sum(void){ */
/*   printf("%d\n", (1 + 100) * 100 / 2 ); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int sum (int); */

/* int main (void) { */
/*   sum(50); */
/*   return 0; */
/*     } */

/* int sum (int max) { */
/*   printf("%d\n", (1 + max) * max / 2); */
/*   return 0; */
/*  } */

/* #include <stdio.h> */
/* int sum (int, int); */
/* int main (void) { */
/*   sum (50, 100); */
/*   return 0; */
/*     } */

/* int sum(int min, int max){ */
/*   printf("%d\n", (min + max) * (max - min + 1) / 2); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int sum (int, int); */
/* int main (void) { */
/*   int value; */
/*   value = sum(50 , 100); */
/*   printf("%d\n",value); */
/*   return 0; */
/* } */

/* int sum (int min, int max) { */
/*   int num; */
/*   num = (min + max) * (max - min + 1) / 2; */
/*   return num; */
/* } */

/* #include <stdio.h> */
/* int countfunc(void); */
/* int main (void) { */
/*   countfunc(); */
/*   countfunc(); */
/*   countfunc(); */
/*   return 0; */
/*     } */
/* int countfunc (void) { */
/*   int count = 0; */
/*   count++; */
/*   printf("%d\n", count); */
/*   return count; */
/*     } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int value1 = 10; */
/*   int value2 = 20; */
/*   printf("1:value1 %d\n",value1); */
/*   printf("2:value2 %d\n",value2); */
/*   { */
/*     int value1; */
/*     value1 = 30; */
/*     value2 = 40; */
/*     printf("2:value1 %d\n", value1); */
/*     printf("3:value2 %d\n", value2); */
/*   } */
/*   printf("3:value1 %d\n",value1); */
/*   printf("3:value2 %d\n", value2); */
/*   return 0; */
/*     } */

/* #include <stdio.h> */
/* int count; */
/* int countfunc (void); */
/* int  main (void) { */
/*   countfunc(); */
/*   countfunc(); */
/*   countfunc(); */
/*   return 0;	 */
/* } */
/* int countfunc(void){ */
/*   count++; */
/*   printf("%d\n", count); */
/*   return count; */
/* } */
 
/* #include <stdio.h> */
/* int count; */
/* int countfunc (void); */
/* int  main (void) { */
/*   countfunc(); */
/*   count = 10; */
/*   countfunc(); */
/*   countfunc(); */
/*   return 0;	 */
/* } */
/* int countfunc(void){ */
/*   count++; */
/*   printf("%d\n", count); */
/*   return 0; */
/* } */
 
/* #include <stdio.h> */
/* int count; */
/* int countfunc (void); */
/* int  main (void) { */
/*   int count; */
/*   countfunc(); */
/*   count = 10; */
/*   countfunc(); */
/*   countfunc(); */
/*   printf("main: count = %d\n",count ); */
/*   return 0;	 */
/* } */
/* int countfunc(void){ */
/*   count++; */
/*   printf("%d\n", count); */
/*   return count; */
/* } */
  
/* #include <stdio.h> */
/* int countfunc(void); */
/* int main (void){ */
/*   countfunc(); */
/*   countfunc(); */
/*   countfunc(); */
/*   return 0; */
/* } */

/* int countfunc (void){ */
/*   static int count = 0; */
/*   count++; */
/*   printf("%d\n", count); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void){ */
/*   int array[100]; */
/*   array[9] = 100; */
/*   printf("1:%d\n",array[9] ); */
/*   array[9]++; */
/*   printf("2:%d\n",array[9] ); */
/*   return 0; */
/* } */

/* #include <stdio.h> */

/* int main(void) */
/* { */
/* 	int array[10] = {42,79,13}; */
	
/* 	printf("array[0] = %d\n",array[0]); */
/* 	printf("array[1] = %d\n",array[1]); */
/* 	printf("array[2] = %d\n",array[2]); */
/* 	printf("array[3] = %d\n",array[3]); */
/* 	printf("array[4] = %d\n",array[4]); */
	
/* 	return 0; */
/* } */

/* #include <stdio.h> */

/* int main(void) */
/* { */
/* 	int array[] = {42,79,13};	/\* 要素数が省略されている *\/ */
	
/* 	printf("array[0] = %d\n",array[0]); */
/* 	printf("array[1] = %d\n",array[1]); */
/* 	printf("array[2] = %d\n",array[2]); */
	
/* 	return 0; */
/* } */

/* #include <stdio.h> */
/* int main(void) */
/* { */
/* 	int array[] = {42,79,13,75,19}; */
/* 	int i; */
	
/* 	for (i = 0;i < 5;i++) { */
/* 		printf("array[%d] = %d\n",i,array[i]); */
/* 	} */
	
/* 	return 0; */
/* } */

/* #include <stdio.h> */

/* int main(void) */
/* { */
/* 	int array[] = {42,79,13,75,19}; */
/* 	int i; */

/* 	for (i = 0;i < (int)(sizeof(array) / sizeof(array[0]));i++) { */
/* 	printf("array[%d] = %d\n",i,array[i]); */
/* 	} */

/* 	return 0; */
/* } */

/* #include <stdio.h> */

/* int main(void) */
/* { */
/* 	int array2[] = {1,2,3,4,5}; */
/* 	int array1[] = {42, 79, 13, 19, 41}; */
/* 	int i; */
	
/* 	for (i = 0;i < (int)(sizeof(array2) / sizeof(array2[0]));i++) { */
/* 		printf("array2[%d] = %d\n",i,array2[i]); */
/* 	} */
	
/* 	/\* array1 の全要素を array2 にコピー *\/ */
/* 	for (i = 0;i < (int)(sizeof(array2) / sizeof(array2[0]));i++) { */
/* 		array2[i] = array1[i]; */
/* 	} */
	
/* 	for (i = 0;i < (int)(sizeof(array2) / sizeof(array2[0]));i++) { */
/* 		printf("array2[%d] = %d\n",i,array2[i]); */
/* 	} */
	
/* 	return 0; */
/* } */

#include <stdio.h>
#include <memory.h>

int main(void){
  int array1[] = {42, 79, 13 , 19, 41};
  int array2[] = {1, 2, 3 , 4 , 5};
  int i;
  for (i = 0; i < sizeof(array2)/sizeof(array2[0]); i++) {
    printf ("array2[%d] = %d\n", i, array2[i]);
  }
  memcpy(array2,array1,sizeof(array1));
  for (i = 0; i < sizeof(array2)/sizeof(array2[0]); i++) {
    printf ("array2[%d] = %d\n", i, array2[i]);
  }
  return 0;
}
