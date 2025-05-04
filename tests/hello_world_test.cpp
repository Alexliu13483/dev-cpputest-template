#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestHarness.h"

extern "C" {
    #include "../includes/helloworld.h"
}

TEST_GROUP(HelloWorld)
{
};

TEST(HelloWorld, TestGreeting)
{
    STRCMP_EQUAL("Hello, World!", printHelloWorld());
}

int main(int argc, char** argv)
{
    return CommandLineTestRunner::RunAllTests(argc, argv);
}