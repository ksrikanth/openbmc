FILESEXTRAPATHS:prepend := "${THISDIR}/linux-aspeed:"
SRC_URI += " \
    file://0500-add-meta-yv4-bmc-dts-setting.patch \
    file://0501-hwmon-ina233-Add-ina233-driver.patch \
    file://0502-hwmon-max31790-support-to-config-PWM-as-TACH.patch \
    file://0503-Add-adm1281-driver.patch \
    file://0504-hwmon-max31790-add-fanN_enable-for-all-fans.patch \
    file://0505-ARM-dts-aspeed-yosemite4-support-mux-to-cpld.patch \
    file://0506-ARM-dts-aspeed-yosemite4-Revise-gpio-name.patch \
    file://0507-remove-pincontrol-on-GPIO-U5.patch \
    file://0508-NCSI-Add-propety-no-channel-monitor-and-start-redo-p.patch \
    file://0509-Meta-yv4-dts-add-mac-config-property.patch \
    file://0510-yosemite4-Add-EEPROMs-for-NICs-in-DTS.patch \
    file://0511-Add-ina233-and-ina238-devicetree-config.patch \
"

