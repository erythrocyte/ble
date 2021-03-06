#ifndef BLE_SRC_SATURSOLVERANALYTIC_H_
#define BLE_SRC_SATURSOLVERANALYTIC_H_

#include <iostream>
#include <memory>
#include <tuple>
#include <vector>

#include "inputData.hpp"

namespace ble_src
{
    std::vector<std::tuple<double, double>> get_satur_exact(const double sc, const double u,
                                                            const std::shared_ptr<InputData> data);
}

#endif