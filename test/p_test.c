
#include "unity.h"
#include "p_cal.h"



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calculator_add(void)
{
TEST_ASSERT_EQUAL(4,calculator(1,3,0));
  TEST_ASSERT_EQUAL(1,calculator(10,-9,0));
  TEST_ASSERT_EQUAL(10000,calculator(4500,5500,0));
    TEST_ASSERT_EQUAL(0,matrix(0));
  
}
void test_calculator_sub(void)
{
  TEST_ASSERT_EQUAL(4,calculator(9,5,1));
    TEST_ASSERT_EQUAL(44,calculator(100,56,1));
    TEST_ASSERT_EQUAL(-20,calculator(100,-120,1));
  
}
void test_multi(void)
{
  TEST_ASSERT_EQUAL(-70,calculator(-7,10,2));
    TEST_ASSERT_EQUAL(1600,calculator(50,32,2));
      TEST_ASSERT_EQUAL(150,calculator(10,15,2));
      TEST_ASSERT_EQUAL(250,calculator(5,50,2));
  

}

void test_div(void)
{
  
  TEST_ASSERT_EQUAL(0,calculator(7,5,4));
   TEST_ASSERT_EQUAL(2,calculator(52,26,4));
   TEST_ASSERT_EQUAL(0,calculator(158,58,4));
}



void test_log(){}
int main(void)
{

  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_calculator_add);
  RUN_TEST(test_calculator_sub);
  RUN_TEST(test_multi);

  return UNITY_END();
}
