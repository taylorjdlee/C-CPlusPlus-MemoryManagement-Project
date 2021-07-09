int global_array[100] = {-1};
int main() {
  return global_array[1 + 100];  // BOOM
}