#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define width 10
#define height 10

void game_set(int tile[][height]);
void print_tile(int tile[][height]);
int main() {
	int tile[width][height] = { 0 };
	srand((unsigned)time(NULL));

	game_set(tile);
	print_tile(tile);

	return 0;
}
void game_set(int tile[width][height]) {
	int i, position[2], mine = 30;
	for (i = 0; i < mine; i++) {
		position[0] = rand() % 10;
		position[1] = rand() % 10;
		if (tile[position[0]][position[1]] == 1)
			i--;
		else
			tile[position[0]][position[1]] = 1;
	}
}

void print_tile(int tile[width][height]) {
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if (tile[j][i] == 0)
				printf(".");
			else
				printf("#");
		}
		printf("\n");
	}
	printf("\n");
}