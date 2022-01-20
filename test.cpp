#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, GoodDay) {
    char* test_val[2]; test_val[0] ="./c-echo";test_val[1] = "GoodDay";
    EXPECT_EQ("GoodDay", echo(2,test_val));
}

TEST(EchoTest, Odd) {
    char* test_val[2]; test_val[0] = "./c-echo";test_val[1] = "one";
    EXPECT_EQ("one", echo(2,test_val));
}

TEST(EchoTest, Linux) {
    char* test_val[2]; test_val[0] = "./c-echo";test_val[1] = "Linux";
    EXPECT_EQ("Linux", echo(2,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
