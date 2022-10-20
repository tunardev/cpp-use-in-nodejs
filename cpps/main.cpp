#include <string>
#include <napi.h>
#include "functions.cpp"
using namespace Napi;

Object InitAll(Env env, Object exports)
{
    exports.Set("sum", Function::New(env, Sum));
    return exports;
}

NODE_API_MODULE(Guid, InitAll);
