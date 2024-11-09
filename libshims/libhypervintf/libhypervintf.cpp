/*
 * Copyright (C) 2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <string>
#include <vector>

struct HyPerToken
{};

void hyper_init()
{}

void hyper_checkSysfsIdExist(int)
{}

void hyper_writeSysfs(int, std::string)
{}

void hyper_acquire(HyPerToken, std::vector<int>)
{}

HyPerToken hyper_getNewHyPerToken() {
    return HyPerToken();
}

extern "C" void _Z22hyper_setTokenProcNameP10HyPerTokenNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(HyPerToken token, std::string procName) {
    (void)token;
    (void)procName;
}

bool hyper_checkResourceExist(int) {
    return false;
}

void hyper_release(HyPerToken)
{}

void hyper_setProcName(std::string)
{}

int hyper_getSupportedFrequency(int, int) {
    return 0;
}
