#include "unity.h"
#include "unity_internals.h"
#include "bank.h"

void setUp()
{

}
void tearDown()
{

}
customer c[1]={{101,"ravi",400}};
void test_search(void)
{
  TEST_ASSERT_EQUAL(0, search(c,1,101));
  TEST_ASSERT_EQUAL(-1, search(c,1,0));
}
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_search);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}


