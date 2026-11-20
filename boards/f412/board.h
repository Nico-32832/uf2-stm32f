#ifndef BOARD_H
#define BOARD_H

#define OSC_FREQ 8
#define USBDEVICESTRING "Arcade"
#define USBMFGSTRING "ELECFREAKS"
#define BOARD_ID "STM32F412-Arcade"
#define BOARD_FLASH_SECTORS 8
#define BOARD_FLASH_SIZE (512 * 1024)


#ifdef DEFINE_CONFIGDATA
__attribute__((section(".config"))) __attribute__((used)) //
const uint32_t configData[] = {
    /* CF2 START */
    0x1e9e10f1, 0x20227a79, // magic
    36, 100,                // 36 used entries (0x24), 100 total entries (0x64)
    1, 0x14,                // 0x01 = 0x14
    2, 0x1a,                // 0x02 = 0x1a
    3, 0x13,                // 0x03 = 0x13
    4, 0x20,                // 0x04 = 0x20 (PIN_BTN_A)
    5, 0x21,                // 0x05 = 0x21 (PIN_BTN_B)
    14, 0x07,               // 0x0e = 0x07
    33, 0x25,               // 0x21 = 0x25
    34, 0x22,               // 0x22 = 0x22
    35, 0x1c,               // 0x23 = 0x1c
    36, 0x23,               // 0x24 = 0x23
    37, 0x140,              // 0x25 = 320 (CFG_DISPLAY_WIDTH)
    38, 0xf0,               // 0x26 = 240 (CFG_DISPLAY_HEIGHT)
    39, 0x08,               // 0x27 = 0x08 (CFG_DISPLAY_CFG0)
    40, 0x10ff,             // 0x28 = 0x10ff (CFG_DISPLAY_CFG1)
    41, 0x01000004,         // 0x29 = 0x01000004 (CFG_DISPLAY_CFG2)
    43, 0x17,               // 0x2b = 0x17
    44, 0x19,               // 0x2c = 0x19
    47, 0x0f,               // 0x2f = 0x0f
    48, 0x29,               // 0x30 = 0x29
    49, 0x15,               // 0x31 = 0x15
    50, 0x12,               // 0x32 = 0x12
    51, 0x2d,               // 0x33 = 0x2d
    60, 0x16,               // 0x3c = 0x16
    64, 0x2a,               // 0x40 = 0x2a
    65, 0x08,               // 0x41 = 0x08
    70, 0x32,               // 0x46 = 0x32
    75, 0x24,               // 0x4b = 0x24
    76, 0x28,               // 0x4c = 0x28
    78, 0x247d,             // 0x4e = 0x247d
    81, 0x23,               // 0x51 = 0x23
    204, 0x08080000,        // 0xcc = 0x08080000 (FLASH_BYTES)
    205, 0x00040000,        // 0xcd = 0x00040000 (RAM_BYTES = 256 KB)
    208, 0xe86b1a9b,        // 0xd0 = 0xe86b1a9b (BOOTLOADER_BOARD_ID)
    209, 0x57755a57,        // 0xd1 = 0x57755a57 (UF2_FAMILY)
    210, 0x10,              // 0xd2 = 0x10
    214, 0x60,              // 0xd6 = 0x60
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* CF2 END */
};
#endif

#endif /* BOARD_H */
