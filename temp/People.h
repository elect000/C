// People.h

#ifndef __PEOPLE_H_
#define __PEOPLE_H_

#include <stdio.h>
#include <string.h>
typedef struct{
  char name[256];
  int age;
  int sex;
} People;

extern void InputPeople(People *data);
extern void ShowPeople(People data);
#endif
