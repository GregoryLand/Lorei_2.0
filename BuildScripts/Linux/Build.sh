#!/bin/bash

x86ReleaseDir=Build/Linux/Release/x86
x64ReleaseDir=Build/Linux/Release/x64
x86DebugDir=Build/Linux/Debug/x86
x64DebugDir=Build/Linux/Debug/x64

cd ..
cd ..

projectDir=$(pwd)

mkdir -p Build/Linux/Release/x86
mkdir -p Build/Linux/Release/x64
mkdir -p Build/Linux/Debug/x86
mkdir -p Build/Linux/Debug/x64

cd Build/Linux/Debug/x64
cmake ../../../../
make