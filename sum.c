// sum.c
int sum2 (int min, int max) {
  int num;
  num = (min + max) * (max - min + 1) / 2;
  return num;
}
