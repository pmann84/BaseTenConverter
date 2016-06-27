#include <string>
#include <iostream>

std::string convertFromBaseTen(int input, int base)
{
   std::string result = "";
   if (input < base)
   {
      result = std::to_string(input) + result;
      return result;
   }
   else
   {
      return convertFromBaseTen(input / base, base) + std::to_string(input % base);
   }
}

int main(int argc, char* argv[])
{
   // Check the number of parameters
   if (argc < 3) 
   {
      // Tell the user how to run the program
      std::cerr << "Usage: " << argv[0] << " [base_10_number_to_convert] [base_to_convert_to]" << std::endl;
      return 1;
   }
   int dec = atoi(argv[1]);
   int base = atoi(argv[2]);
   std::cout << convertFromBaseTen(dec, base) << std::endl;
}