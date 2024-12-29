#pragma once

#include <mw/exceptions/FECCException.h>
#include <mw/util/StringUtil.h>

#define ThrowInsufficientFunds(msg) throw InsufficientFundsException(msg, __FUNCTION__)
#define ThrowInsufficientFunds_F(msg, ...) throw InsufficientFundsException(StringUtil::Format(msg, __VA_ARGS__), __FUNCTION__)

class InsufficientFundsException : public FECCException
{
public:
    InsufficientFundsException(const std::string& message, const std::string& function)
        : FECCException("InsufficientFundsException", message, function)
    {

    }
};