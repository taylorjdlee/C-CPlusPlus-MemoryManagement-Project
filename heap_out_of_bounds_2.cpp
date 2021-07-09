int main() {
	int* array = new int[100];
	array[0] = 0;
	int res = array[1 + 100];  // BOOM
	delete[] array;
	return res;
}
