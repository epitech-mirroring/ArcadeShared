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

class IEntity: public IDisplayable {
public:
    virtual ~IEntity() = default;
    virtual std::shared_ptr<ISprite> getSprite() = 0;
    virtual void setSprite(std::unique_ptr<ISprite> sprite) = 0;
};
