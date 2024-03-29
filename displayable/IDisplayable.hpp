/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include "../utils/ICoordinate.hpp"
#include <memory>

class IDisplayable {
public:
    virtual ~IDisplayable() = default;
    [[nodiscard]] virtual const ICoordinate &getPosition() const = 0;
    [[nodiscard]] virtual int getSize() const = 0;
    virtual void setPosition(const ICoordinate &position) = 0;
    virtual void setPosition(std::unique_ptr<ICoordinate> position) = 0;
    virtual void setSize(int size) = 0;
    [[nodiscard]] virtual char getReplacingChar() const = 0;
};
