#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.2/lab8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
        TEST_METHOD(TestSpaceBeforeComma)
        {
            string input = "Hello , world !";
            string expected = "Hello, world!";
            Assert::AreEqual(expected, removeSpacesBeforePunctuation(input));
        }

        TEST_METHOD(TestNoSpaceBeforePunctuation)
        {
            string input = "Hello,world!";
            string expected = "Hello,world!";
            Assert::AreEqual(expected, removeSpacesBeforePunctuation(input));
        }

        TEST_METHOD(TestOnlySpacesAndPunctuation)
        {
            string input = " , . ! ";
            string expected = ",.! ";
            Assert::AreEqual(expected, removeSpacesBeforePunctuation(input));
        }

        TEST_METHOD(TestEmptyString)
        {
            string input = "";
            string expected = "";
            Assert::AreEqual(expected, removeSpacesBeforePunctuation(input));
        }

        TEST_METHOD(TestStringWithoutPunctuation)
        {
            string input = "Hello world";
            string expected = "Hello world";
            Assert::AreEqual(expected, removeSpacesBeforePunctuation(input));
        }
	};
}