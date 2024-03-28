/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once

class ICoordinate {
public:
    virtual ~ICoordinate() = default;
    [[nodiscard]] virtual int getX() const = 0;
    [[nodiscard]] virtual int getY() const = 0;
    virtual void setX(int x) = 0;
    virtual void setY(int y) = 0;
};
