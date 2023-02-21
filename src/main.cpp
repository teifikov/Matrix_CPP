#include "main.h"
#include <iostream>
//using namespace std;

S21Matrix::S21Matrix() : rows_(0), cols_(0), matrix_(nullptr) {
}	                                    // Базовый конструктор, инициализирующий матрицу некоторой заранее заданной размерностью

S21Matrix::S21Matrix(int rows, int cols) : {}	    // Параметризированный конструктор с количеством строк и столбцов

S21Matrix::S21Matrix(const S21Matrix& other) : {}    // Конструктор копирования

S21Matrix::S21Matrix(S21Matrix&& other) : {}         // Конструктор переноса

S21Matrix::~S21Matrix() {
    delete[] matrix_;
    matrix_ = nullptr;
}
