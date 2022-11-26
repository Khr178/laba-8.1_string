#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 8.1.string/лаба 8.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест81string
{
	TEST_CLASS(юніттест81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* s = "while";
			char* cs = "is";
			int expected = Include(s, cs);
			Assert::AreEqual(expected, 0);
		}
	};
}
