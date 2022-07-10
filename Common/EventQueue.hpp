// ==================================================
// Unrival Engine Source Code.
// Copyright (c) 2022, Marcin 'FoXcodeZ' Grabowy.
// ==================================================
// Author: FoXcodeZ
// Github: https://github.com/FoXcodeZ
// Email: kitsune.dev@gmail.com
// ==================================================

#pragma once
#include <queue>
#include "Event.hpp"

namespace Unrival
{
    class EventQueue
    {
    public:
        void Push(const Event& event);
        void Pop();
        Event& Front();
        Event& Back();
        bool IsEmpty();
    private:
        std::queue<Event> m_events;
    };
}