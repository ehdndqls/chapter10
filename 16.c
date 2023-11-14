#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define width 10
#define height 10

void game_start();
int move_char();
void print_tile();
void save_position();
void clear_tile();

static int tile[width][height] = { 0 };
static int p1, p2;
static int m_a1,m_a2;
static int m_b1,m_b2;
static int g1,g2;
int main() {
	srand((unsigned)time(NULL));
	game_start();

	while (1) {
		if (move_char() == 1) {
			printf("GAME OVER\n");
			break;
		}
		else if (move_char() == 2) {
			printf("GAME CLAER!\n");
			break;
		}
	}
	return 0;
}
void game_start() {
	p1 = 0;
	p2 = 0;
	g1 = width - 1;
	g2 = height - 1;
	m_a1 = rand() % 9 + 1;
	m_a2 = rand() % 9 + 1;
	m_b1 = rand() % 9 + 1;
	m_b2 = rand() % 9 + 1;
	save_position();
	print_tile();
}
void save_position() {
	clear_tile();
	tile[p1][p2] = 1;
	tile[g1][g2] = 2;
	tile[m_a1][m_a2] = 3;
	tile[m_b1][m_b2] = 3;
}

void print_tile() {
	int i, j;
	system("cls");
	for (i = 0; i < width; i++) {
		for (j = 0; j < height; j++) {
			if (tile[i][j] == 0)
				printf("¡Û");
			else if (tile[i][j] == 1)
				printf("P ");
			else if (tile[i][j] == 2)
				printf("G ");
			else
				printf("M ");
		}
		printf("\n");
	}
	printf("\n");
}
void clear_tile() {
	int i, j;
	for (i = 0; i < width; i++) {
		for (j = 0; j < height; j++) {
			tile[i][j] = 0;
		}
	}
}

int move_char() {
	int buf_p1 = p1, buf_p2 = p2;

	int buf_m_a1 = m_a1, buf_m_a2 = m_a2;
	int buf_m_b1 = m_b1, buf_m_b2 = m_b2;
	switch (_getch()) {
	case('d'):
		if (p2 == 9)
			break;
		p2 += 1;
		break;
	case('w'):
		if (p1 == 0)
			break;
		p1 -= 1;
		break;
	case('a'):
		if (p2 == 0)
			break;
		p2 -= 1;
		break;
	case('s'):
		if (p1 == 9)
			break;
		p1 += 1;
	}
	switch (rand()%4) {
	case(0):
		if (m_a2 == 9)
			break;
		m_a2 += 1;
		break;
	case(1):
		if (m_a1 == 0)
			break;
		m_a1 -= 1;
		break;
	case(2):
		if (m_a2 == 0)
			break;
		m_a2 -= 1;
		break;
	case(3):
		if (m_a1 == 9)
			break;
		m_a1 += 1;
	}
	switch (rand() % 4) {
	case(0):
		if (m_b2 == 9)
			break;
		m_b2 += 1;
		break;
	case(1):
		if (m_b1 == 0)
			break;
		m_b1 -= 1;
		break;
	case(2):
		if (m_b2 == 0)
			break;
		m_b2 -= 1;
		break;
	case(3):
		if (m_b1 == 9)
			break;
		m_b1 += 1;
		break;
	}
	if (p1 == m_a1 && p2 == m_a2)
		return 1;
	else if (p1 == buf_m_a1 && p2 == buf_m_a2 && buf_p1 == m_a1 && buf_p2 == m_a2)
		return 1;
	else if (p1 == m_b1 && p2 == m_b2)
		return 1;
	else if (p1 == buf_m_b1 && p2 == buf_m_b2 && buf_p1 == m_b1 && buf_p2 == m_b2)
		return 1;
	else if (p1 == g1 && p2 == g2)
		return 2;
	else {
		save_position();
		print_tile();
		return 0;
	}
}