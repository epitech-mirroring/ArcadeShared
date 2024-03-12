/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <memory>
#include "IArcade.hpp"

class IGame {
public:
    virtual ~IGame() = default;
    virtual void init(std::shared_ptr<IArcade> arcade) = 0;
    virtual void start() = 0;
    virtual void run() = 0;
    virtual int getScore() = 0;
};
