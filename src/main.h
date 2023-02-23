#ifndef MATRIX_CPP_MAIN_H
#define MATRIX_CPP_MAIN_H


class S21Matrix {
    private:
        int rows_, cols_;
        double **matrix_;

    public:
        S21Matrix();	                    // Базовый конструктор, инициализирующий матрицу некоторой заранее заданной размерностью
        S21Matrix(int rows, int cols);  	// Параметризированный конструктор с количеством строк и столбцов
        S21Matrix(const S21Matrix& other);  // Конструктор копирования
        S21Matrix(S21Matrix&& other);       // Конструктор переноса
        ~S21Matrix();                       // Деструктор

        bool EqMatrix(const S21Matrix& other);
        void SumMatrix(const S21Matrix& other);
        void SubMatrix(const S21Matrix& other);
        void MulNumber(const double num);
        void MulMatrix(const S21Matrix& other);
        S21Matrix Transpose();
        S21Matrix CalcComplements();
        double Determinant();
        S21Matrix InverseMatrix();
}

#endif //MATRIX_CPP_MAIN_H
