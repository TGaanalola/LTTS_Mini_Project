#include "unity.h"
#include "unity_internals.h"
#include "bank.h"

void setUp()
{

}
void tearDown()
{

}

/*Test for password*/
void testforpassword(void)
{
	TEST_ASSERT_EQUAL(0,check("gaana@2000","gaana@2000"));
	
}
customer obj[1]={123456789,"gaana",10000};
/*Test for Account Search*/
void recordfound(void)
{
TEST_ASSERT_EQUAL(0,search(obj,1,123456789));
}	
/*Test if is not found*/
void recordnotfound(void)
{
TEST_ASSERT_EQUAL(-1,search(obj,1,1234567));
}	
int main()
{
	UNITY_BEGIN();
	RUN_TEST(testforpassword);
	RUN_TEST(recordfound);
	RUN_TEST(recordnotfound);
	
	return UNITY_END();
}
