// Copyright 2023 Ezhev Mikhail
#include "./shellsimplemerge.h"

TEST(ShellSimpleMergeSeq, Int_64els) {
    int size = 64;
    std::vector<int> vec = genVector(size);
    std::vector<int> sequential = shellSimpleMergeSeq(vec);
    std::sort(vec.begin(), vec.end());
    ASSERT_EQ(sequential, vec);
}

TEST(ShellSimpleMergeSeq, Int_128els) {
    int size = 128;
    std::vector<int> vec = genVector(size);
    std::vector<int> sequential = shellSimpleMergeSeq(vec);
    std::sort(vec.begin(), vec.end());
    ASSERT_EQ(sequential, vec);
}

TEST(ShellSimpleMergeSeq, Int_256els) {
    int size = 256;
    std::vector<int> vec = genVector(size);
    std::vector<int> sequential = shellSimpleMergeSeq(vec);
    std::sort(vec.begin(), vec.end());
    ASSERT_EQ(sequential, vec);
}

TEST(ShellSimpleMergeSeq, Int_512els) {
    int size = 512;
    std::vector<int> vec = genVector(size);
    std::vector<int> sequential = shellSimpleMergeSeq(vec);
    std::sort(vec.begin(), vec.end());
    ASSERT_EQ(sequential, vec);
}

TEST(ShellSimpleMergeSeq, Int_1024els) {
    int size = 1024;
    std::vector<int> vec = genVector(size);
    std::vector<int> sequential = shellSimpleMergeSeq(vec);
    std::sort(vec.begin(), vec.end());
    ASSERT_EQ(sequential, vec);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
