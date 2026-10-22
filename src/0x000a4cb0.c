/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F0CFE59BC52FA18F3C9155C3A4D053DE5C47ACD8B8FEA997A4D6A5E534BE1D3
 * Entry: 0x000a4cb0, Ghidra index: 1961, label: FUN_000a4cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000a4cb0(void)

{
  uint in_EAX;
  
  if (in_EAX < 0xe7fd942b) {
    if (in_EAX == 0xe7fd942a) {
      return 4;
    }
    if (in_EAX != 0xade1ce7) {
      if (in_EAX == 0x13d18cfc) {
        return 3;
      }
      if (in_EAX == 0x1fe75072) {
        return 2;
      }
    }
  }
  else {
    if (in_EAX == 0xe90647a9) {
      return 0;
    }
    if (in_EAX == 0xef44f398) {
      return 8;
    }
  }
  return 0xffffffff;
}
