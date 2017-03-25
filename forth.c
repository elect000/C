// this file use for learning C

/* #include <stdio.h> */
/* struct student { */
/*   int year; */
/*   int class; */
/*   int member; */
/*   char name[64]; */
/*   double stature; */
/*   double weight; */
/* }; */

/* int main (void){ */
/*   struct student data; */
/*   data.year = 10; */
/*   printf("%d\n",data.year ); */
/*   return 0; */
/* } */


/* #include <stdio.h> */
/* #include <string.h> */

/* struct student{ */
/*   int year; */
/*   int class; */
/*   int number; */
/*   char name[64]; */
/*   double stature; */
/*   double weight; */
/* }; */

/* int main(void) { */
/*   struct student data,data2; */
/*   data.year = 3; */
/*   data.class = 4; */
/*   data.number = 18; */
/*   strcpy(data.name, "MARIO"); */
/*   data.stature = 168.2; */
/*   data.weight = 72.4; */
/*   data2 = data; */
/*   printf("data1.year = %d : data2.year = %d \n", data.year, data2.year); */
/*   printf("data1.name = %s : data2.name = %s\n",data.name,data2.name); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #include <string.h> */
/* typedef struct { */
/*   int year; */
/*   int class; */
/*   int number; */
/*   char name[64]; */
/*   double stature; */
/*   double weight; */
/* } student; */

/* void student_print(student data); */

/* int main(void){ */
/*   student data; */
/*   data.year = 3; */
/*   data.class = 4; */
/*   data.number = 18; */
/*   strcpy(data.name, "MARIO"); */
/*   data.stature = 168.2; */
/*   data.weight = 72.4; */
/*   student_print(data);; */
/*   return 0; */
/* } */

/* void student_print(student data){ */

/*   	printf("[学年]:%d\n",data.year); */
/* 	printf("[クラス]:%d\n",data.class); */
/* 	printf("[出席番号]:%d\n",data.number); */
/* 	printf("[名前]:%s\n",data.name); */
/* 	printf("[身長]:%f\n",data.stature); */
/* 	printf("[体重]:%f\n",data.weight); */
/* 	return; */
/* } */

/* #include <stdio.h> */
/* #include <string.h> */
/* typedef struct { */
/*   int year; */
/*   int class; */
/*   int number; */
/*   char name[64]; */
/*   double stature; */
/*   double weight; */
/* } student; */

/* void student_print(student *data); */

/* int main (void){ */
/*   student data; */
/*   data.year = 3; */
/*   data.class = 4; */
/*   data.number = 18; */
/*   strcpy(data.name, "MARIO"); */
/*   data.stature = 168.2; */
/*   data.weight = 72.4; */
  
/*   student_print(&data); // call func with data address */
/*   return 0; */
/* } */

/* void student_print(student *data){ */
/*   printf("[YEAR]: %d\n", data->year); */
/*   printf("[CLASS]: %d\n", data->class); */
/*   printf("[NUMBER]: %d\n", data->number); */
/*   printf("[NAME]: %s\n", data->name); */
/*   printf("[STATURE]: %f\n", data->stature); */
/*   printf("[WEIGHT]: %f\n", data->weight); */
/* } */

/* #include <stdio.h> */
/* #include <string.h> */

/* typedef struct { */
/*   char name[64]; */
/*   int age; */
/*   int sex; */
  
/* } People; */

/* void InputInfo (People *data); */
/* void PrintInfo (People *data); */

/* int main(void){ */
/*   People data[3]; */
/*   int i; */
/*   for (i = 0; i < 3; i++) { */
/*     InputInfo(&data[i]); */
/*   } */
/*   for (i = 0; i < 3; i++) { */
/*     PrintInfo(&data[i]); */
/*   } */
/*   return 0; */
/* } */

/* void InputInfo (People *data) { */
/*   printf("PLEASE INPUT DATA: \n"); */
/*   printf("Name: "); */
/*   scanf ("%s", data->name); */
/*   printf("Age: "); */
/*   scanf ("%d", &data->age); */
/*   printf("Sex(1 : Man / 2 : Female)"); */
/*   scanf ("%d", &data->sex); */
/*   printf ("\n"); */
/* } */

/* void PrintInfo (People *data) { */
/*   printf("[NAME]: %s\n", data->name); */
/*   printf("[AGE]: %d\n", data->age); */
/*   if (data->sex == 1) { */
/*     printf("[SEX]: MAN\n"); */
/*   } */
/*   if (data->sex == 2) { */
/*     printf("[SEX]: FEMALE\n"); */
/*   }  */
/*   if (data -> sex != 1 && data -> sex != 2){ */
/*     printf("[SEX]: UNKNOWN\n"); */
/*   } */
/* } */

/* #include <stdio.h> */
/* int main (void){ */
/*   FILE *file; */
/*   file = fopen("test.txt","w"); */
/*   fclose(file); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main(void) { */
/*   FILE *file; */
/*   file = fopen ("test.txt","w"); */
/*   fprintf(file,"Hello, world"); */
/*   fclose(file); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int i; */
/*   FILE *file; */
/*   file = fopen("test.txt", "r"); */
/*   fscanf (file,"%d",&i); */
/*   fclose(file); */
/*   printf("%d\n",i); */
/*   return 0; */
/* } */
 
/* #include <stdio.h> */
/* int main(void){ */
/*   int i,j; */
/*   FILE *file; */
/*   file = fopen("test.txt", "r"); */
/*   fscanf(file,"%d,%d",&i,&j); */
/*   printf("i = %d : j = %d\n", i, j); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main(void) { */
/*   FILE *file; */
/*   file = fopen ("test.dat","wb"); */
/*   fclose(file); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int buf = 100; */
/*   FILE *file; */
/*   file = fopen ("test.dat","wb"); */
/*   fwrite(&buf,sizeof(buf), 1, file); */
/*   fclose(file); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int buf [] = {10, 100 , 1000, 10000}; */
/*   FILE *file; */
/*   file = fopen ("test.dat", "wb"); */
/*   fwrite(buf, sizeof(buf), 1, file); */
/*   fclose(file); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   int buf[4]; */
/*   FILE *file; */
/*   file = fopen ("test.dat", "rb"); */
/*   fread(&buf, sizeof(buf), 1 ,  file); */
/*   fclose(file); */
/*   printf("%d %d %d %d\n", buf[0], buf[1], buf[2] , buf[3]); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main(int argc, char *argv[]) { */
/*   if (argc > 1) {	// have a command? */
/*     printf("%s\n", argv[1]); */
/*   } */
/*   fflush(stdin); // stop process */
/*   getchar();	// press any key */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main (int argc, char *argv[]) { */
/*   while (argc > 0) { */
/*     argc--; */
/*     if (argv[argc][0] == '-') { */
/*       if (argv[argc][1] == 'a') { */
/* 	printf("-a Option \n"); */
/*       } */
/*       if (argv[argc][1] == 's') { */
/* 	printf("-s Option \n"); */
/*       } */
/*     } */
/*   } */
/*    return 0; */
/* } */

/* #include <stdio.h> */
/* int main (void) { */
/*   FILE *file; */
/*   file = fopen ("test.csv", "w"); */
/*   fprintf(file,"number	, name, average\n"); */
/*   fprintf(file,"1 	, nobi-nobita, 0\n"); */
/*   fprintf(file,"2, minamoto-shizuka, 90\n"); */
/*   fprintf(file,"3, gouda-takeshi, 40\n"); */
/*   fprintf(file,"4, honekawa-suneo, 70\n"); */
/*   fclose(file); */
/*   return 0; */
/* } */
 
/* #include <stdio.h> */
/* #define EXCISETAX 0.08 */
/* int main(void){ */
/*   int price; */
/*   printf("本体価格: "); */
/*   scanf("%d", &price); */
/*   price = (int)((1 + EXCISETAX) * price); */
/*   printf("税込価格%d\n", price); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #define AUTHOR "森口将憲" */
/* int main (void) { */
/*   printf("作者名: %s\n", AUTHOR); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* int main(void){ */
/*   const double EXCISETAX = 0.05; */
/*   int price; */
/*   printf("本体価格: "); */
/*   scanf	("%d", &price); */
/*   price = (int)((1 + EXCISETAX) * price); */
/*   printf("税込価格: %d\n", price); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #define PRINT_TEMP printf("temp = %d\n", temp) */

/* int main (void) { */
/*   int temp = 100; */
/*   PRINT_TEMP; */
/*   return 0; */
/* } */
 
/* #include <stdio.h> */
/* #define PRINTM(X) printf("%d\n", X); */

/* int main (void) */
/* { */
/*   int a1 = 100, a2 = 50; */
/*   PRINTM(a1); */
/*   PRINTM(a2); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #define GET_TRAPEZOID_AREA(A,B,H) ((A) + (B)) * (H) / 2 */
/* int main (void){ */
/*   int up, down, h, s; */
/*   printf("上底、下底、高さ：　"); */
/*   scanf("%d,%d,%d",&up, &down, &h); */
/*   s = GET_TRAPEZOID_AREA(up, down, (h + 3)); */
/*   printf("面積: %d\n", s); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #include <stdlib.h> */

/* int main(void) { */
/*   int i; */
/*   int *heap; */
/*   heap = (int *)malloc(sizeof(int) *  10); */
/*   if (heap == NULL)  { */
/*     exit(0); */
/*   } */
/*   for (i = 0; i < 10; i++) { */
/*     heap[i] = i; */
/*   } */
/*   printf("%d\n", heap[5]); */
/*   free(heap); */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #include <stdlib.h> */

/* int main (void) { */
/*   int *heap; */
/*   heap = (int *)malloc(sizeof(int) * 10); */
/*   heap = (int *)realloc(heap ,sizeof(int) * 100); */
/*   free (heap);	 */
/*   return 0; */
/* } */

/* #include <stdio.h> */
/* #include <string.h> */
/* #include <stdlib.h> */


/* typedef struct { */
/*   char name[256]; */
/*   int age; */
/*   int sex; */
/* } People; */

/* void InputPeople (People *data); */
/* void PrintPeople (People *data); */

/* int main (void) */
/* { */
/*   int i, count, datasize; */
/*   People *data; */

/*   datasize = 10; */
/*   data = (People *)malloc(sizeof(People) * datasize); */
/*   count = 0; */
/*   do */
/*     { */
/*       InputPeople(&data[count]); */
/*       count++; */
/*       if (count >= datasize) { */
/* 	datasize += 10; */
/* 	data = (People *)realloc(data,sizeof(People) * datasize); */
/*       } */
/*     } while (data[count - 1].age != -1); */
/*   for (i = 0; i < count - 1; i++) { // !!! */
/*     PrintPeople(&data[i]); */
/*   } */
/*   free(data); */
/*   return 0; */
/* } */

/* void InputPeople(People *data) { */
/*   printf("[NAME]: "); */
/*   scanf("%s", data->name); */
/*   printf("[AGE]: "); */
/*   scanf("%d", &data->age); */
/*   printf("[SEX (1 : MAN / 2 : FEMALE)]: "); */
/*   scanf("%d", &data->sex); */
/* } */

/* void PrintPeople(People *data){ */
/*   printf("[NAME]: %s\n", data->name); */
/*   printf("[AGE]: %d\n", data->age); */
/*   if (data->sex == 1) { */
/*     printf("[SEX]: Man\n"); */
/*   } */
/*   if (data->sex == 2) { */
/*     printf("[SEX]: Female\n"); */
/*   } */
/* } */
 
