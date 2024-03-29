/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include "../IGame.hpp"
#include "IError.hpp"

class IGameError: public virtual IError {
public:
    ~IGameError() override = default;
    [[nodiscard]] virtual const IGame &getGame() const = 0;
};
