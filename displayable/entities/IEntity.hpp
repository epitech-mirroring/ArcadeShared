/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <memory>
#include "../IDisplayable.hpp"
#include "ISprite.hpp"

class IEntity: public virtual IDisplayable {
public:
    ~IEntity() override = default;
    [[nodiscard]] virtual const std::unique_ptr<ISprite> &getSprite() const = 0;
    virtual void setSprite(ISprite &sprite) = 0;
};
