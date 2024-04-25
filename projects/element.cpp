# include <iostream>
# include <string>

using namespace std;

int main()
{
  string array[] = { "B123", "C234", "A345","C15","B177","G3003","C235","B179" };

        char letter = 'B';
        for (const auto& element : array) 
        {
            if (element.front() == letter )
            {
                cout << element << "starts with letter " << letter << endl ;
            }
        }

        return 0;
}