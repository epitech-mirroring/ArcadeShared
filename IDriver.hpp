/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <memory>
#include "displayable/IDisplayable.hpp"
#include "events/IEvent.hpp"
#include <cstddef>

class IDriver {
public:
    virtual ~IDriver() = default;
    virtual void display(const IDisplayable &displayable) = 0;
    virtual void flipFrame() = 0;
    virtual void bindEvent(IEvent::EventType type, EventKey key, EventCallback callback) = 0;
    virtual void setPreferredSize(std::size_t width, std::size_t height) = 0;
};
