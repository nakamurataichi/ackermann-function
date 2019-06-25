#include <stdio.h>
#include <stdlib.h>

int count = 0;

int ack(int x, int y)
{
	count++;

	if (x == 0) {
		// printf("x�F%d�Cy�F%d\n", x, y + 1);
		return y + 1;
	}

	if (y == 0) {
		// printf("x�F%d�Cy�F%d\n", x - 1, 1);
		return ack(x - 1, 1);
	}

	if ((x > 0) && (y > 0)) {
		// printf("x�F%d�Cy�Fack(x, y - 1);\n", x - 1);
		return ack(x - 1, ack(x, y - 1));
	}
}

int main(int argc, char *argv[])
{
	int x, y;
	if (argc == 2) {
		x = atoi(argv[0]);
		y = atoi(argv[1]);
		ack(x, y);
	} else {
		printf("x�F");
		scanf("%d", &x);
		printf("y�F");
		scanf("%d", &y);
		printf("%d\n", ack(x, y));
	}

	printf("ack���Ăяo���ꂽ�񐔂�%d��ł��D\n", count);
}
