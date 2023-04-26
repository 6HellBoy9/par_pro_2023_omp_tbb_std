// Copyright 2023 Goncharova Anna
#include <omp.h>
#include <iostream>
#include <vector>
#include <ctime>
#include "../../../modules/task_2/goncharova_a_sobel/goncharova_a_sobel.h"
#include "gtest/gtest.h"

TEST(sobel, get_matrix) {
  std::vector<int> example = { 1, 5, 4, 3 };
  image Example(2, 2, example);
  ASSERT_EQ(example, Example.GetMatrix());
}

TEST(sobel, uncorrect_width) {
  std::vector<int> example = { 1, 5, 4, 3 };
  ASSERT_ANY_THROW(image Example(0, 2, example));
}

TEST(sobel, uncorrect_height) {
  std::vector<int> example = { 1, 5, 4, 3 };
  ASSERT_ANY_THROW(image Example(2, 0, example));
}

TEST(sobel, uncorrect_sizes) {
  std::vector<int> example = { 1, 5, 4, 3 };
  ASSERT_ANY_THROW(image Example(0, 0, example));
}

TEST(sobel, uncorrect_width_in_random) {
  ASSERT_ANY_THROW(image Example(0, 1));
}

TEST(sobel, uncorrect_height_in_random) {
  ASSERT_ANY_THROW(image Example(1, 0));
}

TEST(sobel, uncorrect_sizes_in_random) {
  ASSERT_ANY_THROW(image Example(0, 0));
}

TEST(sobel, seq_sobel) {
  std::vector<int> example = { 1, 0, 2, 1, 0, 2, 1, 0, 2 };
  std::vector<int> result = { 4 };
  image Example(3, 3, example);
  image K = Example.SeqSobel();
  ASSERT_EQ(result, K.GetMatrix());
}

TEST(sobel, omp_sobel) {
  std::vector<int> example = { 1, 0, 2, 1, 0, 2, 1, 0, 2 };
  std::vector<int> result = { 4 };
  image Example(3, 3, example);
  image K = Example.OmpSobel();
  ASSERT_EQ(result, K.GetMatrix());
}

//  TEST(sobel, few_number_of_elements) {
//  image Ex(5, 5);
//  Ex.GetRandom();
//  double time0 = omp_get_wtime();
//  image K = Ex.SeqSobel();
//  double time1 = omp_get_wtime();
//  image KL = Ex.OmpSobel();
//  double time2 = omp_get_wtime();
//  double seq_time = time1 - time0;
//  double omp_time = time2 - time1;
//  std::cout << "SEQ: " << seq_time << std::endl;
//  std::cout << "OMP: " << omp_time << std::endl;
//  ASSERT_TRUE(omp_time > seq_time);
//  }
//
//  TEST(sobel, large_number_of_elements) {
//  image Ex1(10000, 10000);
//  Ex1.GetRandom();
//  double time0 = omp_get_wtime();
//  image Ex2 = Ex1.SeqSobel();
//  double time1 = omp_get_wtime();
//  image Ex3 = Ex1.OmpSobel();
//  double time2 = omp_get_wtime();
//  double seq_time = time1 - time0;
//  double omp_time = time2 - time1;
//  std::cout << "SEQ: " << seq_time << std::endl;
//  std::cout << "OMP: " << omp_time << std::endl;
//  ASSERT_TRUE(omp_time < seq_time);
//  }
