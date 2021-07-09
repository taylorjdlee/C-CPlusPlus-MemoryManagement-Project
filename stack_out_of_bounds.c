int main() {
  int stack_array[100];
  stack_array[1] = 0;
  return stack_array[1 + 100];  // BOOM
}