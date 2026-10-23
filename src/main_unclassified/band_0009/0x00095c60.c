/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4495B0A6E41C5B78B39FAC5A7C32383DC0951110A5558C9453BC9C7BB49AB38C
 * Entry: 0x00095c60, Ghidra index: 1825, label: FUN_00095c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00095c60(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x50);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_00095cf0();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(undefined4 *)(iVar1 + 0x28) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x30) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x34) = 0x3f800000;
  *(undefined1 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *param_3 = iVar1;
  return 0;
}
