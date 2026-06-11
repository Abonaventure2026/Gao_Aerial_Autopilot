# Gao_Aerial_Autopilot

[![License](https://img.shields.io/badge/License-Commercial%20Proprietary-red.svg)](LICENSE)
[![C++](https://img.shields.io/badge/C%2B%2B-20-blue.svg)](https://isocpp.org/)
[![Version](https://img.shields.io/badge/version-5.0.0-brightgreen.svg)](.version)

Gao_Aerial_Autopilot 是 4A 系统的空域空间分支，专为多旋翼、固定翼等空中载体设计。依赖基座 libgao_base.a。

## 支持构型
- A-1 多旋翼：六轴动力学（可降阶为四轴）+ 位置-姿态级联 PID/MPC
- A-2 固定翼：质点模型 + 制导律（高度、航向、空速控制）

## 依赖
- Gao_4A_Autopilot（基座）

## 构建与运行
```bash
./build_all.sh
./build/gao_autopilot
```
## 切换构型
修改 `edge/config/morphology.yaml` 文件，例如：
```yaml
morphology: "A-2"   # A-1 或 A-2
```
## 目录结构
```text
edge/
├── morphologies/A-1/  # 多旋翼动力学与控制器
├── morphologies/A-2/  # 固定翼动力学与控制器
├── shared/            # 风场估计、空域规划
├── safety/            # 行为树（断桨保护、地理围栏）
└── hardware/          # PWM、IMU、GPS 驱动抽象
```

## 许可证
商业专有。

## 作者
Yongji Gao
Email: bonaventure@163.com
