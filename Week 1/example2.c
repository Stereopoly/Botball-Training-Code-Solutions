int main() {
  int count = 1;
  while(!left_button()) 
  // Same as (left_button() == 0)
  {
    printf("%d ", count);
    msleep(250);
    count++;
  }
  return 0;
}
