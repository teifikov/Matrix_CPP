#include "main.h"
#include <iostream>

S21Matrix::S21Matrix() : rows_(0), cols_(0), matrix_(nullptr) {}

S21Matrix::S21Matrix(int rows, int cols) : rows_(rows), cols_(cols) {
    if (rows <= 0 || cols <= 0) {
        throw std::length_error("Matrix size can't be zero");
    } else {
        this->matrix_ = new double *[rows_]();
        for (int i = 0; i < rows_; i++)
            this->matrix_[i] = new double[cols_]();
    }
}

S21Matrix::S21Matrix(const S21Matrix& other) : rows_(other.rows_), cols_(other.cols_) {
    for (int i = 0; i < rows_; ++i)
        for (int j = 0; j < cols_; ++j)
            matrix_[i][j] = other.matrix_[i][j];
}

S21Matrix::S21Matrix(S21Matrix&& other) {
    rows_ = other.rows_;
    cols_ = other.cols_;
    matrix_ = other.matrix_;
    other.rows_ = 0;
    other.cols_ = 0;
    other.matrix_ = nullptr;
}

S21Matrix::~S21Matrix() {
    delete[] matrix_;
    matrix_ = nullptr;
}
