/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#include <string>
#include <memory>
#include <exception>

class IError: std::exception {
public:
    virtual ~IError() = default;
    virtual int getCode() const = 0;
    virtual const char *what() const noexcept = 0;
};
