/**
 * @file test_game_operations.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "game_operations.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/**
 * @brief 
 * 
 */
void test_check_draw(){
  TEST_ASSERT_EQUAL(1, check_draw(6));
}


/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_check_draw);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 

