/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#include <string>

class IError {
public:
    virtual ~IError() {}
    virtual int getCode() const = 0;
    virtual std::string getMessage() const = 0;
};
