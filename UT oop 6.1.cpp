#include "pch.h"
#include "CppUnitTest.h"
#include "../oop 6.1/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UToop61
{
	TEST_CLASS(UToop61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 4;
			Array c = Array(n);
			Array::value_type* a = new Array::value_type[n];
			for (int i = 0; i < n; i++)
				a[i] = 3;
			Array::iterator l = const_cast<Array::iterator>(c.begin());
			for (int j = 0; j < n; j++, l++)
				*l = a[j];

			int sum = c.Sum();
			Assert::AreEqual(sum, 12);

		}
	};
}
