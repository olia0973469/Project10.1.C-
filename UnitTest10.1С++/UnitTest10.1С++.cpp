#include "pch.h"
#include "CppUnitTest.h"
#include "../Project10.1.C++/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101С
{
	TEST_CLASS(UnitTest101С)
	{
	public:
		
        TEST_METHOD(TestMethod2)
        {
            // Arrange
            char fname[] = "testfile.txt";
            std::ofstream fout(fname);
            fout << "example text" << std::endl;
            fout.close();

            // Act
            bool result = ProcessTXT1(fname);

            // Assert
            Assert::IsFalse(result, L"The ProcessTXT1 function did not return false as expected.");
		}
	};
}
