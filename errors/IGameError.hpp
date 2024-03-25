/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "../IGame.hpp"
#include "IError.hpp"

class IGameError: public IError {
public:
    virtual ~IGameError() = default;
    virtual int getCode() const = 0;
    virtual const std::unique_ptr<IGame> &getGame() const = 0;
    virtual const char *what() const noexcept = 0;
};
