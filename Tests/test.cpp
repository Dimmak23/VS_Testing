#include "pch.h"

//? What we test
#include "../tested_headers//Matrix2.h"
#include "../tested_headers//Vector2.h"

TEST(MultyplicationTest, TwoDimVectorByTwoDimMatrix)
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
