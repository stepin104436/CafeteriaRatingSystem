#include "unity.h"
#include "cafeteria.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_mylib(void)
	{
  		TEST_ASSERT_EQUAL(4.5, overall_rating(40,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6,3,4,5,6));

	}
	void test_mylib1(void)
	{
	TEST_ASSERT_NOT_EQUAL(1.00, overall_rating(40,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4));
	}
	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_mylib);
	  	RUN_TEST(test_mylib1);

  		return UNITY_END();
	}
