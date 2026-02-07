#include <nlohmann/json.hpp>
#include <gtest/gtest.h>
#include <string>

TEST(MathTest, AddsCorrectly) {
  EXPECT_EQ(1 + 1, 2);
}

TEST(StringTest, HelloContainsH) {
  std::string s = "hello";
  EXPECT_EQ(s.front(), 'h');
}
