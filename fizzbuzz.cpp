// Name: Nigina Daniyarova
// Date: 2/20/21

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int X, Y, N;
   cin >> X;
   cin >> Y;
   cin >> N;
   cout << "\n";

   for (int i = 1; i <= N; i++)
   {
   		if (i%X == 0 && i%Y == 0)
   		{
   			cout << "FizzBuzz\n";
   		}
   		if (i%X == 0 && i%Y != 0)
   		{
   			cout << "Fizz\n";
   		}
   		if (i%X != 0 && i%Y == 0)
   		{
   			cout << "Buzz\n";
   		}
   		if (i%X != 0 && i%Y !=0)
   		{
   			cout << i;
   			cout << "\n";
   		}

   }
}

