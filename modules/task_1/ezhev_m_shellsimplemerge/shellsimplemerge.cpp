// Copyright 2023 Ezhev Mikhail
#include "../../modules/task_1/ezhev_m_shellsimplemerge/shellsimplemerge.h"

std::vector<int> genVector(int size) {
    std::random_device dev;
    std::mt19937 gen(dev());
    std::vector<int> vec(size);
    for (int i = 0; i < size; ++i) {
        vec[i] = gen() % 100;
    }
    return vec;
}

std::vector<int> shellSimpleMergeSeq(const std::vector<int>& vec) {
    int vecSize = static_cast<int>(vec.size());
    std::vector<int> result(vec);

    for (int s = vecSize / 2; s > 0; s /= 2) {
        for (int i = s; i < vecSize; ++i) {
            for (int j = i - s; j >= 0 && result[j] > result[j + s]; j -= s) {
                std::swap(result[j], result[j + s]);
            }
        }
    }

    return result;
}
