#include "gtest/gtest.h"

//? What we test
#include "../tested_headers//Matrix2.h"
#include "../tested_headers//Vector2.h"

TEST(MultyplicationTest, TwoDimVectorByTwoDimMatrix_01)
{
    Matrix2 Matrix {
        1.0, -1.0,
        -2.0, 0.5
    };

    Vector2 Vector { 1.0, -2.0 };

    const double vResultX = 3.0;
    const double vResultY = -3.0;

    Vector *= Matrix;

    EXPECT_EQ(Vector.X(), vResultX);
    EXPECT_EQ(Vector.Y(), vResultY);
}

TEST(MultyplicationTest, TwoDimVectorByTwoDimMatrix_02)
{
    Matrix2 Matrix {
        12.0, -411.0,
        -52.5, 120.5
    };

    Vector2 Vector { -61.0, 0.5 };

    const double vResultX = -937.5;
    const double vResultY = 3262.75;

    Vector *= Matrix;

    EXPECT_EQ(Vector.X(), vResultX);
    EXPECT_EQ(Vector.Y(), vResultY);
}
