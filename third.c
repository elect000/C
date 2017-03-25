// this file use for learning C

// tips <ctype.h>
// isalnum = alphabet + number
// isdigit = 10 digit
// isxdigit = 16 digit ex.0A
// isalpha = alphabet
// isupper = upper alphabet
// islower = lower alphabet
// isspace = space

// tips <string.h>
// strcpy(to, from);     
// strncpy(to, from ,seq );
//   -> to[seq] = '\0' 
// strcat(a, b);      // cf. a = a + b
// strcmp(str2,str1); // 0 -> T / other -> NIL

// tips <stdio.h>
// sprintf (to , howto, from1, from2, from3 ...);
// ex. sprintf(str , "%s%s%s", str1, "MARIO", str2);
/* #include <stdio.h> */
/* int main (void) { */
/*   char c = 'A'; */
/*   printf("%c\n", c); */
/*   return 0; */
/* } */

/* #include <stdio.h> */

/* int main (void) { */
/*   char c = 'A' + 9; */
/*   printf("%c\n", c); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   char c = '8'; */
/*   int suuti = c - '0'; */
/*   printf("%d\n", suuti); */
/*   return 0; */
/*   } */

/* #include <stdio.h> */
/* int main (void) { */
/*   char c = 'A'; */
/*   int suuti; */
/*   if (c >= '0' && c <= '9') { */
/*     suuti = c - '0'; */
/*   } else { */
/*     suuti = 0; */
/*   } */
/*   printf("%d\n", suuti); */
/*   return 0; */
/*     } */

// tips <ctype.h>
// isalnum = alphabet + number
// isdigit = 10 digit
// isxdigit = 16 digit ex.0A
// isalpha = alphabet
// isupper = upper alphabet
// islower = lower alphabet
// isspace = space

// tips <string.h>
// strcpy(to, from);     
// strncpy(to, from ,seq );
//   -> to[seq] = '\0' 
/* #include <stdio.h> */
/* #include <ctype.h> */

/* int main (void) { */
/*   char c = 'A'; */
/*   int suuti; */
/*   if (isdigit(c)) { */
/*     suuti = c - '0'; */
/*   } else { */
/*     suuti = 0; */
/*   } */
/*   printf("%d\n", suuti); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   char str[6] = {'M','A','R','I','O','\0'}; */
/*   printf("%s\n",str); */
/*   return 0; */
/* } */


/* #include <stdio.h> */
/* int main (void) { */
/*   char str[] = "MARIO"; */
/*   printf("%s\n", str); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main(void) { */
/*   char str[6]; */
/*   str[0] = 'M'; */
/*   str[1] = 'A'; */
/*   str[2] = 'R';	 */
/*   str[3] = 'I'; */
/*   str[4] = 'O'; */
/*   str[5] = '\0'; */
/*   printf ("%s\n",str); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #include <stdlib.h> */
/* int mainc(void) { */
/* char str[] = "145"; */
/* int suuti = atoi(str); */
/* printf("%d\n", suuti); */
/* return 0; */
/* } */

/* #include <stdio.h> */
/* #include <string.h> */

/* int main (void) { */
/*   char str[10]; */
/*   strcpy(str, "MARIO"); */
/*   printf("%s\n", str); */
/*   return 0; */
/*     } */

/* #include <stdio.h> */
/* #include <string.h> */

/* int main (void) { */
/*   char str1[] = "MARIO",str2[10];    */
/*   strncpy(str2, str1, 3); */
/*   str2[3] = '\0'; */
/*   printf("%s\n", str2); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void){ */
/*   char str[] = "Dragon" "Quest"; */
/*   printf("%s\n", str); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #include <string.h> */

/* int main(void) */
/* { */
/* 	char str1[12] = "DRAGON"; */
/* 	char str2[] = "QUEST"; */
/* 	strcat(str1,str2); */
/* 	printf("%s\n",str1); */
/* 	return 0; */
/* } */


/* #include <stdio.h> */
/* int main(void){ */
/*   char str[16]; */
/*   char str1[12] = "DRAGON"; */
/*   int i = 3; */
/*   sprintf(str, "%s%s%d\n", str1, "QUEST", i); */
/*   printf(str); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main(void){ */
/*   char str[32]; */
/*   scanf("%s", str); */
/*   printf("%s\n", str); */
/*   return 0; */
/* } */


/* #include <stdio.h> */
/* int main(void){ */
/*   char str[32]; */
/*   scanf("%32s", str); */
/*   printf("%s\n", str); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void){ */
/*   int i; */
/*   char str[256]; */
/*   scanf("%s", str); */
/*   for (i = 0; str[i] != '\0'; i++) { */
/*   } */
/*   printf("%d\n", i); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #include <string.h> */

/* int main(void){ */
/*   int i;	 */
/*   char str[256]; */
/*   scanf("%s", str); */
/*   i = strlen(str); */
/*   printf("%d\n", i); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #include <string.h> */

/* int main(void){ */
/*   char str1[256], str2[] = "DRAGONQUEST"; */
/*   scanf("%s", str1); */
/*   if (strcmp(str1,str2) == 0) { */
/*     printf("T\n"); */
/*   } else { */
/*     printf("F\n"); */
/*   } */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main(void){ */
/*   int i; */
/*   printf("%p\n", &i); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void){ */
/*   int i1, i2, i3; */
/*   printf("i1(%p)\n", &i1); */
/*   printf("i2(%p)\n", &i2); */
/*   printf("i3(%p)\n", &i3); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void){ */
/*   int array[10]; */
/*   printf("array___(%p)\n", &array); */
/*   printf("array[0](%p)\n", &array[0]); */
/*   printf("array[1](%p)\n", &array[1]); */
/*   printf("array[2](%p)\n", &array[2]); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main(void){ */
/*   char str[256] = "DRAGON"; */
/*   scanf("%s", &str[6]); */
/*   printf("%s\n", str); */
/*   return 0; */
/* } */

/* #include <stdio.h> */

/* int main(void){ */
/*   int *p,i; */
/*   p = &i; */
/*   printf("p = %p\n",p); */
/*   printf("&i = %p\n", &i); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main(void){ */
/*   int *p,i; */
/*   p = &i; */
/*   *p = 10; */
/*   printf("*p = %d\n", *p); */
/*   printf("i = %d\n", i); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* void func (int *pvalue); */
/* int main (void) */
/* { */
/*   int value = 10; */
/*   printf("&value = %p\n", &value); */
/*   func(&value); */
/*   printf("value = %d\n", value); */
/*   return 0; */
/* } */

/* void func(int *pvalue){ */
/*   printf("pvalue = %p\n", pvalue); */
/*   *pvalue = 100; */
/*   return; */
/* } */

/* #include <stdio.h> */
/* int getaverage(int data[10]); */
/* int main(void){ */
/*   int average,array[10] = {15,78,98,15,98,85,17,35,42,15}; */
/*   average = getaverage(array); */
/*   printf("%d\n", average); */
/*   return 0; */
/* } */

/* int getaverage(int data[10]){ */
/*   int i, average = 0; */
/*   for (i = 0; i < 10; i++) { */
/*     average += data[i]; */
/*   } */
/*   return average / 10; */
/* } */

/* #include <stdio.h> */

/* int main(void) */
/* { */
/* 	int *data; */
/* 	int i,average = 0,array[10] = {15,78,98,15,98,85,17,35,42,15}; */
	
/* 	data = array;	/\* ポインタ変数に配列のアドレスを代入 *\/ */

/* 	for (i = 0;i < 10;i++) { */
/* 		average += data[i];	/\* 配列みたいに使える *\/ */
/* 	} */

/* 	printf("%d\n",average / 10); */
/* 	return 0; */
/* } */

/* #include <stdio.h> */

/* int main(void) */
/* { */
/* 	int *data; */
/* 	int i,average = 0,array[10] = {15,78,98,15,98,85,17,35,42,15}; */
	
/* 	data = array;	/\* ポインタ変数に配列のアドレスを代入 *\/ */

/* 	for (i = 0;i < 10;i++) { */
/* 		average += *(data + i);	/\* ポインタ演算 *\/ */
/* 	} */

/* 	printf("%d\n",average / 10); */
/* 	return 0; */
/* } */

/* #include <stdio.h> */
/* void maxmin(int array[], int *max, int *min); */
/* int main(void){ */
/*   int max; */
/*   int min; */
/*   int i = 0; */
/*   int array[10]; */

/*   do { */
/*     printf("The %d num is : ", i); */
/*     scanf("%d", &array[i]);  */
/*     i++; */
/*   }while( i != 10 && array[i - 1] != -1); */
/*   maxmin(array, &max, &min); */
/*   printf("max: %d / min: %d\n",max, min); */
/*   return 0; */
/* } */
/* void maxmin(int array[], int *max, int *min){ */
/*   int i = 0; */
/*   *max = 0; */
/*   *min = 100; */
/*   while (array[i] != -1 && i != 10) { */
/*     if (array[i] > *max) { */
/*       *max = array[i]; */
/*     } */
/*     if (array[i] < *min) { */
/*       *min = array[i]; */
/*     } */
/*     i++; */
/*   } */
/*  return; */
/* } */

