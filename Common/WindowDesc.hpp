// ==================================================
// Unrival Engine Source Code.
// Copyright (c) 2022, Marcin 'FoXcodeZ' Grabowy.
// ==================================================
// Author: FoXcodeZ
// Github: https://github.com/FoXcodeZ
// Email: kitsune.dev@gmail.com
// ==================================================

#pragma once
#include <string>

namespace Unrival
{
    struct WindowDesc
    {
        std::string name = "Unrival Window";
        unsigned int width = 1024;
        unsigned int height = 768;
        bool visible = true;
    };
} // Unrival