/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C34F87D509FC301C194FAFA4CFFED7D21E940A79DBC86D98042056E67208B33
 * Entry: 0x00094e90, Ghidra index: 1816, label: FUN_00094e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00094e90(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0xe4);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_00094f20();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(undefined4 *)(iVar1 + 0xd0) = 0x3a83126f;
  *(undefined4 *)(iVar1 + 0x14) = 2;
  *param_3 = iVar1;
  return 0;
}
