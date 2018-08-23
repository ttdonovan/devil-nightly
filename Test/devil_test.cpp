#include "gmock/gmock.h"
#include "gtest/gtest.h"

// #include "types.h"

#include <windows.h>
#include <dsound.h>

#include "defs.h"
// #include "enums.h"
#include "structs.h"

#include "Source/player.h"

#if !defined(GTEST_CUSTOM_INIT_GOOGLE_TEST_FUNCTION_)

TEST(PlayerTest, CreatePlayer) {
    CreatePlayer(0, 1);
}

#endif  // !defined(GTEST_CUSTOM_INIT_GOOGLE_TEST_FUNCTION_)
