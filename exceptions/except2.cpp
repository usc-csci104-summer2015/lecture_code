#include <iostream>
#include <stdexcept>
using namespace std;

void readFile(char* filename)
{
  ifstream ifile;
  ifile.exceptions(ios::failbit);
  // will throw if opening fails
  ifile.open(filename); 

  // Should you catch exception here
  // Or should you catch it in main()
}

int main(int argc, char* argv[])
{
  readFile(argv[1]);

}
