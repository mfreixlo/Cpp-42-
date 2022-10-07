#include <iostream>
#include <string>

int main (int argc, char **argv)
{
  std::string str ("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
  int i = 0;
  int j = 0;
  if (argc == 1)
    std::cout << str;
  while (++i < argc)
  {
    j = -1;
    str.assign( argv[i] );
    while (++j < str.length())
    {
      if (str[j] >= 'a' && str[j] <= 'z')
        str[j] += 'A' - 'a';
    }
    std::cout << str;
  }
  std::cout << "\n";
  return 0;
}