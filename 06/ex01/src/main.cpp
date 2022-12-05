#include "Data.hpp"
#include <stdint.h>

uintptr_t   serialize(Data *data)
{
    return (reinterpret_cast<uintptr_t>(data));
}

Data    *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data    *data;
    uintptr_t   serialized;
    Data    *deserialized;

    data = new Data();
    std::cout << "Data ptr: " << data << ", value = " << data->getValue() << std::endl;

    serialized = serialize(data);
    std::cout << "serialized(Data ptr): " << serialized << std::endl;

    deserialized = deserialize(serialized);
    std::cout << "deserialized(serialized(Data ptr)): " << deserialized << ", value = " << deserialized->getValue() << std::endl;

    delete data;
    return (0);
}