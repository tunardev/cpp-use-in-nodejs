#include <napi.h>
using namespace Napi;

Number Sum(const CallbackInfo &info)
{
    Env env = info.Env();
    Number x = info[0].As<Number>();
    int value = x.Int32Value();
    int sum = 0;
    while (value)
    {
        sum += (value % 10);
        value /= 10;
    }
    Number returnValue = Number::New(env, sum);
    return returnValue;
}