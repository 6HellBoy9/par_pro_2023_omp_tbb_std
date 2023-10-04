// Copyright 2023 Ezhev Mikhail
#include "./shellsimplemerge.h"

TEST(Shell_Sort, Int_64els) {
    int size = 8;

    std::vector<int> vec = genVector(size);
    std::vector<int> sequential = shellSimpleMergeSeq(vec);
    std::vector<int> parallel = shellSimpleMergePar(vec);
    ASSERT_EQ(parallel, sequential);
}

TEST(Shell_Sort, Int_128els) {
    int size = 128;

    std::vector<int> vec = genVector(size);
    std::vector<int> sequential = shellSimpleMergeSeq(vec);
    std::vector<int> parallel = shellSimpleMergePar(vec);
    ASSERT_EQ(parallel, sequential);
}

TEST(Shell_Sort, Int_256els) {
    int size = 256;

    std::vector<int> vec = genVector(size);
    std::vector<int> sequential = shellSimpleMergeSeq(vec);
    std::vector<int> parallel = shellSimpleMergePar(vec);
    ASSERT_EQ(parallel, sequential);
}

TEST(Shell_Sort, Int_512els) {
    int size = 512;

    std::vector<int> vec = genVector(size);
    std::vector<int> sequential = shellSimpleMergeSeq(vec);
    std::vector<int> parallel = shellSimpleMergePar(vec);
    ASSERT_EQ(parallel, sequential);
}

TEST(Shell_Sort, Int_1024els) {
    int size = 1024;

    std::vector<int> vec = genVector(size);
    std::vector<int> sequential = shellSimpleMergeSeq(vec);
    std::vector<int> parallel = shellSimpleMergePar(vec);
    ASSERT_EQ(parallel, sequential);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
