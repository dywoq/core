#include <dywoq/cxx/core/type_traits.hxx>
#include <gtest/gtest.h>

using namespace dywoq::cxx::core::type_traits;

TEST(TypeTraits, Satisfied_Ok) {
  auto got = satisfied<int, true>::yes;
  auto want = true;
  EXPECT_EQ(got, want);
}

TEST(TypeTraits, Satisfied_Fail) {
  auto got = satisfied<int, true>::yes;
  auto want = false;
  EXPECT_NE(got, want);
}
