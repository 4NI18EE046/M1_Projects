#include "unity.h"
#include "tarrif_calc.h"
void test_tarrif_calc(void);

void setUp(void)
{

}

void tearDown(void)
{

}

void test_Residential()
{
    TEST_ASSERT_EQUAL(173.00, Residential(40,50,40));
    TEST_ASSERT_EQUAL(276.00, Residential(60,50,40));

}
void test_Commercial()
{
    TEST_ASSERT_EQUAL(281.00, Commercial(60, 50 , 40));
    TEST_ASSERT_EQUAL(531.00, Commercial(110, 50 , 40));
    TEST_ASSERT_EQUAL(1658.00, Commercial(220, 50 , 40));
}
void test_Industrial()
{
    TEST_ASSERT_EQUAL(204.50, Industrial(30,50,40));
    TEST_ASSERT_EQUAL(398.00, Industrial(80,50,40));
    TEST_ASSERT_EQUAL(783.00, Industrial(120,50,40));
    TEST_ASSERT_EQUAL(1915.00, Industrial(250,50,40));
    TEST_ASSERT_EQUAL(2604.50, Industrial(310,50,40));
    TEST_ASSERT_EQUAL(3630.00, Industrial(410,50,40));
    TEST_ASSERT_EQUAL(5617.50, Industrial(550,50,40));
}
int main()
{
    
  
   // printf("\t\t\t\t\t\tWelcome to Tariff calculation\n\n\n");
    UnityBegin(NULL);
    
    RUN_TEST(test_Residential);
    RUN_TEST(test_Commercial);
    RUN_TEST(test_Industrial);
    
    return(UnityEnd());

    
    

}
