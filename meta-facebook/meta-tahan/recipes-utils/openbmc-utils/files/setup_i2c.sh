#!/bin/bash
#
# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# This program file is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by the
# Free Software Foundation; version 2 of the License.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
# for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program in a file named COPYING; if not, write to the
# Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor,
# Boston, MA 02110-1301 USA


# shellcheck disable=SC1091
. /usr/local/bin/openbmc-utils.sh

#
# SMB/Chassis EEPROM 
#
i2c_device_add 3 0x56 24c64

# Create SCM CPLD
#
i2c_device_add 1 0x35 scmcpld
#

#
# Create PWR CPLD
#
i2c_device_add 12 0x60 pwrcpld
