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

class IDriver {
public:
    virtual ~IDriver() = default;
    virtual void display(std::shared_ptr<IDisplayable> displayable) = 0;
    virtual void flipFrame() = 0;
    virtual void bindEvent(IEvent::EventType type, EventKey key, EventCallback callback) = 0;
};
