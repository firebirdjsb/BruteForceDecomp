/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84DB02FBBB9FE8C8579E10889AD745F49683626616CA13D7765F35DF4436A1D0
 * Entry: 0x00090930, Ghidra index: 1776, label: FUN_00090930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00090930(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (((param_1[2] != 0) && (iVar1 != 0)) && (0 < iVar1)) {
    do {
      FUN_00090970();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}
