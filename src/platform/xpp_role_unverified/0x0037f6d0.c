/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97676FBFEE8C10EA47E8148F3F11AEB663A51EC3E6D30DCB31B13D57B076F992
 * Entry: 0x0037f6d0, Ghidra index: 13502, label: FUN_0037f6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
void FUN_0037f6d0(void)

{
  undefined1 local_2c [16];
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_8 [4];
  
  /* XBE 0x0037F6D6..0x0037F6DF: load the 32-bit XboxHardwareInfo
   * pointer from guest import slot [0x00386380]; compare [ptr+5]
   * with the literal byte 0xA1. Host import mapping remains deferred. */
  uint32_t guest_hardware_info =
      *(const uint32_t *)(uintptr_t)UINT32_C(0x00386380);
  if (*(const uint8_t *)(uintptr_t)(guest_hardware_info + 5u) !=
      UINT8_C(0xA1)) {
    local_1c = 3;
    local_14 = 0x1000;
    local_18 = 0xfed00000;
    local_10 = HalGetInterruptVector(1,local_8);
    FUN_0037f20e(local_2c,0x4e0);
  }
  return;
}
