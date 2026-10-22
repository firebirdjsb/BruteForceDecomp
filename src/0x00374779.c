/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BAF0F6DE88933AF14DE1302FEA7CBF84417287B811BBEC0AF6C50D52D1036C9
 * Entry: 0x00374779, Ghidra index: 13430, label: FUN_00374779
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00374779(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  int iVar1;
  int in_EDX;
  int *extraout_EDX;
  
  *(undefined4 *)(in_EDX + 0x100) = 0;
  *(undefined4 *)(in_EDX + 0x104) = 0;
  *(undefined4 *)(in_EDX + 0x110) = 0;
  *(undefined4 *)(in_EDX + 0x118) = 0;
  iVar1 = *(int *)(in_EDX + 0x160);
  *(int *)(in_EDX + 0x160) = iVar1 + 0x37f;
  *(int *)(in_EDX + 0x10c) = iVar1;
  FUN_003797cb(0x80,0x80,param_3);
  *param_5 = (extraout_EDX[0x40] + 0x80) * 0x10000 + *extraout_EDX;
  return 1;
}
