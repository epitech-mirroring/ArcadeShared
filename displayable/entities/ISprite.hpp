/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <memory>
#include "../../utils/IPicture.hpp"

struct DrawRect {
    std::size_t x;
    std::size_t y;
    std::size_t width;
    std::size_t height;
};

class ISprite {
public:
    virtual ~ISprite() = default;
    [[nodiscard]] virtual const IPicture &getPicture() const = 0;
    virtual void setPicture(const IPicture &picture) = 0;
    virtual void setPicture(std::unique_ptr<IPicture> picture) = 0;
    [[nodiscard]] virtual const DrawRect &getDrawRect() const = 0;
    virtual void setDrawRect(const DrawRect &drawRect) = 0;
};
