#!/bin/bash
wget -P /tmp https://github.com/Basant-Adel/alx-low_level_programming/blob/6f936b80b0d9fd8edcfaf23efe7b2d0f684c4183/0x18-dynamic_libraries/libgm.o
export LD_PRELOAD=/tmp/libgm.so
