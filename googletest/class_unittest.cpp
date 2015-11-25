#include <limits.h>
#include "class.h"
#include "gtest/gtest.h"


TEST(StudentTest, Normal) {
  EXPECT_EQ(Student::num, 0);
  Student s("小明", 15, 90);
  EXPECT_EQ(s.num, 1);
  Student s2("李磊", 16, 80);
  EXPECT_EQ(s2.num, 2);
  EXPECT_EQ(s2.name, "李磊");
}
