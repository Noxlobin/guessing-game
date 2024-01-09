#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  time_t currentTime = time(NULL);

  srand((unsigned)currentTime);

  int x;
  int secret = (rand() % 100) + 1;
  cout << "Guess the random number between 1-100: ";

  while (true)
  {
    cin >> x;

    if (x > secret)
    {
      cout << "Go lower." << endl;
    }

    if (x < secret)
    {
      cout << "Go higher." << endl;
    }

    if (x == secret)
    {
      cout << "Congrats! You win!" << endl;
      break;
    }

    cout << "Guess again: ";
  }

  return 0;
}