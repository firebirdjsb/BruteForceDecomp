/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4996912B94B1162BF428479254B3FF4B1B81B2C8F243DA5BA87677330C9BE0D7
 * Entry: 0x002615a0, Ghidra index: 8637, label: FUN_002615a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002615a0(int param_1,int param_2,byte param_3)

{
  char cVar1;
  
  if ((param_3 & 1) != 0) {
    return 0x80004005;
  }
  FUN_00288a10();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_2 != 0) {
    cVar1 = FUN_00288c20(param_1 + 8);
    if (cVar1 == '\0') {
      return 0x80004005;
    }
  }
  return 0;
}
