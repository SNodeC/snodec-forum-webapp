#ifndef UTILS_H
#define UTILS_H

#include <random>
#include <string>

class Utils {
public:
  Utils();
  static std::string GetFieldByName(char *body, std::string field);
  static std::string Gen_random(std::size_t length);
};

#endif // UTILS_H
