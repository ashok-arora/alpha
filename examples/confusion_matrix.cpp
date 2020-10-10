#include <Matrix.hpp>
#include <metrics.hpp>

// Example program

// Create two Matrix objects one as true labels and one as predictions.
// Then, apply the confusion_matrix() method.
int main() {
    std::vector<double> temp1{1, 0, 0, 1, 1, 0, 1};
    std::vector<std::vector<double>> temp_mat1{temp1};
    Matrix y_true = matrix.init(temp_mat1).T();

    std::vector<double> temp2{1, 1, 0, 1, 0, 0, 1};
    std::vector<std::vector<double>> temp_mat2{temp2};
    Matrix y_pred = matrix.init(temp_mat2).T();

    // Confusion Matrix
    Matrix con_mat = metrics.confusion_matrix(y_true, y_pred);

    con_mat.print();

    return 0;
}