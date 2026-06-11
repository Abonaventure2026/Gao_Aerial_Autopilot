// Copyright (c) 2026 Yongji Gao. All Rights Reserved.
// License: Commercial Proprietary - See LICENSE file.
// Project: Gao_Aerial_Autopilot | UUID: 58034e0cf4b5
// Build: 2026-06-11_16-24-19

#include <iostream>
#include <signal.h>
#include <thread>
#include <chrono>
volatile sig_atomic_t keep_running = 1;
void signal_handler(int) { keep_running = 0; }
int main() {
    signal(SIGINT, signal_handler);
    std::cout << "Gao Autopilot " << __VERSION__ << " - Build successful\n";
    while (keep_running) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    return 0;
}
