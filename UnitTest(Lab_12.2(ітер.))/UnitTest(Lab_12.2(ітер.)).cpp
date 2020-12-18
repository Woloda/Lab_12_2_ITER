#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12.2(ітер)/Lab_12.2(ітер).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab122ітер
{
	TEST_CLASS(UnitTestLab122ітер)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Spusok* first = NULL;
			Spusok* last = NULL;
			for (int i = 0; i < 2; i++)
				Creata(first, last, i);

			Spusok* T = first;
			int x = 3;
			Process(T, x);

			T = first;
			int l = T->inf;
			Assert::AreEqual(l, 3);
		}
	};
}
