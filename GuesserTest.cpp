/**
 * Unit Tests for the class
**/

#include <gtest/gtest.h>
#include "Guesser.h"

class GuesserTest : public ::testing::Test
{
	protected:
		GuesserTest(){} //constructor runs before each test
		virtual ~GuesserTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// Example "smoke test" (can be deleted)
TEST(GuesserTest, smoke_test)
{
  Guesser object("Secret");
}

/*check if the secret will take a distance of 3*/
TEST(GuesserTest, stest)
{
   if( m_remaining < 1 || m_locked ){
    return false;
  }
  else if( guess != m_secret ){
    unsigned int difference = distance(guess);
    if( difference > 2 ){
      m_locked = true;
    }
    else{
      m_remaining--;
    }
    return false;
  }
  else{
    return true;
  }
}

 

/*check if the secret counts the "lock" as a guess*/
TEST(GuesserTest, xtest)
{
  Guesser object("Secret"); /* to invoke distance, call object.distance*/
  ASSERT_EQ(Guesser.distance, 3); /*try with a distance greater than 2; i.e.,3 */
  cout << "remaining_tries: " << m_remaining << endl;
}
 

/*check if the secret counts the "lock" as a guess*/
TEST(GuesserTest, stest)
{
  Guesser object("Secret");
  ASSERT_EQ(Guesser.distance, 3); /*try with a distance greater than 2; i.e.,3 */
  cout << "remaining_tries: " << m_remaining << endl;
}

/*check if a "correct" guess resets the number of remaining attempts*/
TEST(GuesserTest, stest)
{
  Guesser object("Secret");
  ASSERT_EQ(Guesser.distance, 0); /*try with a distance greater than 2; i.e.,3 */
  cout << "remaining_tries: " << m_remaining << endl;
}


/*check if 3 "nearly correct, >=2" guesses lock the user out*/
TEST(GuesserTest, stest)
{
  Guesser object("Secret");
  ASSERT_EQ(Guesser.distance, 1); /*try with a distance greater than 2; i.e.,3 */
  cout << "remaining_tries: " << m_remaining << endl;
  Guesser object("Secret");
  ASSERT_EQ(Guesser.distance, 1); /*try with a distance greater than 2; i.e.,3 */
  cout << "remaining_tries: " << m_remaining << endl;
  Guesser object("Secret");
  ASSERT_EQ(Guesser.distance, 2); /*try with a distance greater than 2; i.e.,3 */
  cout << "remaining_tries: " << m_remaining << endl;
}


/*check if a "correct" guess resets the number of remaining attempts even after a lock*/
TEST(GuesserTest, stest)
{
  Guesser object("Secret");
  ASSERT_EQ(Guesser.distance, 3); /*try with a distance greater than 2; i.e.,3 */
  cout << "remaining_tries: " << m_remaining << endl;
  Guesser object("Secret");
  ASSERT_EQ(Guesser.distance, 0); /*try with a distance greater than 2; i.e.,3 */
  cout << "remaining_tries: " << m_remaining << endl;
}

/*check if capitalization matters*/
TEST(GuesserTest, stest)
{
  Guesser object("Secret");
  ASSERT_EQ(toUpperCase(guess), 1); /*try capitalizing the guess*/
  cout << "remaining_tries: " << m_remaining << endl;
}