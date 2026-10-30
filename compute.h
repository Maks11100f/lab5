#pragma once

#include <string>
#include <chrono>

const std::chrono::seconds SLOW_DURATION{7};
const std::chrono::seconds QUICK_DURATION{1};

void compute(const std::string &name, std::chrono::seconds duration);

void slow(const std::string &name);

void quick(const std::string &name);
