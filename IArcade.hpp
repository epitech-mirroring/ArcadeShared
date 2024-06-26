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

class IArcade {
public:
    virtual ~IArcade() = default;

    // Driver functions for games
    virtual void display(const IDisplayable &displayable) = 0;
    virtual void flipFrame() = 0;
    virtual void bindEvent(IEvent::EventType type, EventKey key, EventCallback callback) = 0;
    virtual void setPreferredSize(std::size_t width, std::size_t height) = 0;
    [[nodiscard]] virtual float getDeltaTime() const = 0; // in seconds
    [[nodiscard]] virtual std::size_t getTime() const = 0; // in ms
    [[nodiscard]] virtual std::size_t getCurrentGameHighScore() const = 0;
};
