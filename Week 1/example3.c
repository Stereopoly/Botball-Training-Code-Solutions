int main() {
  int i, j;
  int n = 3;
  for(i = 0; i < n; i++) {
    for(j = 1; j <= n; j++) {
      printf("%d ", n * i + j);
    }
    printf("\n");
  }
  return 0;
}
