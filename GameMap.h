#pragma once

#include <vector>
#include <algorithm>

struct Vector2 {
	int x,
		y;
};

class GameMap
{
	//Поля класса
private:
	int** map;
	Vector2 size;
	int length; //Необходимая длина выигрышной последовательности

	//Методы класса
public:
	GameMap(); //Конструктор
	GameMap(Vector2, int); //Конструктор
	GameMap(int, int, int); //Конструктор
	~GameMap(); //Деструктор

	bool SetPosition(Vector2, int); //задать позицию
	bool IsEmpty(Vector2); // Проверка на свободную ячейку
	bool IsEmpty(int, int); //Проверка на свободную ячейку
	void SetMap(Vector2, int);
	void SetMap(int, int, int);
	int GetValue(Vector2);
	int GetValue(int, int);
	int GetLength() { return length; };
	Vector2 GetSize() { return size; };
	int CheckList(std::vector<int> a);
	int CheckingWin();
	bool CanMove();
	Vector2 GetCenter();
};

