/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 077C0544B340E4CDD887DC126BBFB6581F4FE191E844F6F1B796E40107B7A9F7
 * Entry: 0x00265aa0, Ghidra index: 8730, label: FUN_00265aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00265aa0(int param_1)

{
  if (*(int *)(param_1 + 0x10c) == -1) {
    return 0x80004005;
  }
  XAPILIB__CloseHandle(*(int *)(param_1 + 0x10c));
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  return 0;
}
