#include <stdio.h>
void update(int, char[], char[], char[]);
void main() {
	int location;
	char input[100], insert[100], result[100];
	printf("Input a string: ");
	gets_s(input);
	printf("Enter insert location (index): ");
	scanf_s("%d", &location);
	getchar();
	printf("Enter insert word: ");
	gets_s(insert);
	update(location, input, insert, result);
	puts(result);
}

void update(int index, char input[], char insert[], char result[]) {
	int i, size = 0, k = 0;
	char a[100];
	
	while (insert[size] != '\0') {
		size++;
	}
	size -= 1;

	for (i = 0; input[i-size-1] != '\0'; i++) {
		if (i >= index && i<= index + size) {
			result[i] = insert[i - index];
		}
		else if (i > index + size) {
			result[i] = input[i - size-1];
		}
		else result[i] = input[i];
	}
	result[i] = '\0';


}