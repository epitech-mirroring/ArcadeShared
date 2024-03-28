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

class ISprite {
public:
    virtual ~ISprite() = default;
    [[nodiscard]] virtual const std::unique_ptr<IPicture> &getPicture() const = 0;
    virtual void setPicture(std::unique_ptr<IPicture> picture) = 0;
};
