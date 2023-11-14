#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define width 20
#define height 20
void start_game(int tile[][height], int position[]);
void random_walk(int tile[][height],int position[]);
void print_tile(int tile[][height]);
int main() {
	int position[2];
	int tile[width][height] = { 0 };
	srand((unsigned)time(NULL));

	start_game(tile, position);
	for (int i = 0; i < 8; i++) {
		random_walk(tile, position);
		print_tile(tile);
	}
	print_tile(tile);

	return 0;
}
void start_game(int tile[width][height],int position[2]) {
	//position[0] = rand() % (width + 1);
	//position[1] = rand() % (height + 1);
	position[0] = width / 2;
	position[1] = height / 2;
	tile[position[0]][position[1]] = 1;
}
void random_walk(int tile[width][height], int position[2]) {
	switch (rand() % 8) {
	case(0):
		position[1] += 1;
		break;
	case(1):
		position[0] += 1;
		position[1] += 1;
		break;
	case(2):
		position[0] += 1;
		break;
	case(3):
		position[0] += 1;
		position[1] -= 1;
		break;
	case(4):
		position[1] -= 1;
		break;
	case(5):
		position[0] -= 1;
		position[1] -= 1;
		break;
	case(6):
		position[0] -= 1;
		break;
	case(7):
		position[0] -= 1;
		position[1] += 1;
		break;
	}
	tile[position[0]][position[1]] = 1;
}

void print_tile(int tile[width][height]) {
	int i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if (tile[j][i] == 0)
				printf("¡Û");
			else
				printf("¡Ü");
		}
		printf("\n");
	}
	printf("\n");
}