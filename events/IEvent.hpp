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
        KEY_DOWN,
        KEY_UP,
        KEY_PRESS,
        MOUSE_DOWN,
        MOUSE_UP,
        MOUSE_MOVE,
    };

    virtual ~IEvent() = default;
    [[nodiscard]] virtual EventType getType() = 0;
    [[nodiscard]] virtual EventKey getKey() = 0;
    [[nodiscard]] virtual std::unique_ptr<ICoordinate> &getPosition() = 0;
};

typedef std::function<void(IEvent &)> EventCallback;
