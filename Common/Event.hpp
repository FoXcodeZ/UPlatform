// ==================================================
// Unrival Engine Source Code.
// Copyright (c) 2022, Marcin 'FoXcodeZ' Grabowy.
// ==================================================
// Author: FoXcodeZ
// Github: https://github.com/FoXcodeZ
// Email: kitsune.dev@gmail.com
// ==================================================

#pragma once
#include "EventType.hpp"
#include "EventData.hpp"

namespace Unrival
{
    class Event
    {
    public:
        EventType eventType;
        EventData eventData;
    };
} // Unrival