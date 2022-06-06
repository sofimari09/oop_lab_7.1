#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <algorithm>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> test = { 13, 7, 2, 9, 8 };
			auto min = *min_element(test.begin(), test.end());
			Assert::AreEqual(2, min);
		}
	};
}
