/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <memory>
#include "Keys.hpp"
#include "../utils/ICoordinate.hpp"
#include <functional>

class IEvent {
public:
    enum EventType {
        _KEY_DOWN,
        _KEY_UP,
        _KEY_PRESS,
        _MOUSE_DOWN,
        _MOUSE_UP,
        _MOUSE_MOVE,
    };

    virtual ~IEvent() = default;
    [[nodiscard]] virtual EventType getType() const = 0;
    [[nodiscard]] virtual EventKey getKey() const = 0;
    [[nodiscard]] virtual const ICoordinate &getPosition() const = 0;
};

typedef std::function<void(const IEvent &)> EventCallback;
