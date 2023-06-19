#!/bin/bash
wget -P /tmp https://github.com/Basant-Adel/alx-low_level_programming/raw/df5b8adcdb7fc789b8f6a89afc0268f3dca971a5/0x18-dynamic_libraries/libgm.so
export LD_PRELOAD=/tmp/libgm.so
