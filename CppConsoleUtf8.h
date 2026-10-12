#pragma once

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <Windows.h>

namespace cpp_learning_console {
    struct Utf8Console {
        Utf8Console() noexcept {
            SetConsoleOutputCP(CP_UTF8);
            SetConsoleCP(CP_UTF8);
        }
    };
    // Runs before main; repeated initialization across source files is harmless.
    static const Utf8Console initialize_console;
}
#endif
