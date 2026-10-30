/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88074C34A3D6358CB194CC6C72D8C0568E17044D9D633573B8B829A6EAFA5209
 * Entry: 0x002630a0, Ghidra index: 8669, label: FUN_002630a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002630a0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x54);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_00263270();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(undefined4 *)(iVar1 + 0x28) = 0x41f00000;
  *(undefined4 *)(iVar1 + 0x2c) = 1;
  *param_3 = iVar1;
  return 0;
}
