// Copyright 2023 Ezhev Mikhail
#ifndef MODULES_TASK_2_EZHEV_M_SHELLSORTSIMPLEMERGE_SHELLSORTSIMPLEMERGE_H_
#define MODULES_TASK_2_EZHEV_M_SHELLSORTSIMPLEMERGE_SHELLSORTSIMPLEMERGE_H_

#include <gtest/gtest.h>
#include <omp.h>
#include <vector>
#include <iostream>
#include <random>
#include <algorithm>

std::vector<int> genVector(int size);
std::vector<int> shellSimpleMergeSeq(const std::vector<int>& vec);
std::vector<int> shellSimpleMergePar(const std::vector<int>& vec);

#endif  // MODULES_TASK_2_EZHEV_M_SHELLSORTSIMPLEMERGE_SHELLSORTSIMPLEMERGE_H_
