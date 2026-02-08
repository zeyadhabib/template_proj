#include <nlohmann/json.hpp>
#include <gtest/gtest.h>

TEST(FakeTestNamespace, Test_FakeTest_HappyPath_Should_Succeed) {
  GTEST_SKIP() << "This test is skipped because it's just an example.";
}
