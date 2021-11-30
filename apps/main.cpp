#include <iostream>

#include "hello.h"

int main(int, char**) {

  auto result = ( 10 <=> 20 ) > 0;

  std::cout << "result: " << result << std::endl;

  std::string helloJim = generateHelloString( "Tomás" );
  std::cout << helloJim << std::endl;

  return 0;

}