/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97676FBFEE8C10EA47E8148F3F11AEB663A51EC3E6D30DCB31B13D57B076F992
 * Entry: 0x0037f6d0, Ghidra index: 13502, label: FUN_0037f6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0037f6d0(void)

{
  undefined1 local_2c [16];
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_8 [4];
  
  if (XboxHardwareInfo_exref[5] != (code)0xa1) {
    local_1c = 3;
    local_14 = 0x1000;
    local_18 = 0xfed00000;
    local_10 = HalGetInterruptVector(1,local_8);
    FUN_0037f20e(local_2c,0x4e0);
  }
  return;
}
