#ifndef _preprocessing_hpp_
#define _preprocessing_hpp_

#include <all.hpp>

class Preprocessing {
  private:
    bool if_mean = false, if_std = false;
    Matrix mean, std;

  public:
    Matrix normalize(Matrix, std::string);
};

Matrix Preprocessing::normalize(Matrix mat, std::string dim) {
    if (!if_mean) {
        mean = matrix.mean(mat, dim);
        if_mean = true;
    }
    if (!if_std) {
        std = matrix.std(mat, dim);
        if_std = true;
    }
    Matrix result = (mat - mean) / std;
    return result;
}

class LabelEncoder {
  private:
    Matrix labels;

  public:
    void fit(Matrix Y);
    Matrix fit_transform(Matrix Y);
    Matrix get_params();
    void set_params();
    Matrix transform(Matrix Y);
}

#endif /* _preprocessing_h_ */
