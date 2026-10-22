/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18CD59BF65B10266B1C14F4B898242949D2F0296C9064C83F54620CBD2C4AAD8
 * Entry: 0x00342ff1, Ghidra index: 12696, label: FUN_00342ff1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00342ff1(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00330c2d(param_4);
  param_4[2] = param_3;
  param_4[0xe] = param_1;
  *param_4 = FUN_00342a84;
  param_4[1] = FUN_0034244a;
  *(undefined2 *)(param_4 + 0xf) = param_2;
  *(undefined2 *)((int)param_4 + 0x3e) = param_2;
  uVar1 = XAPILIB__GetTickCount();
  param_4[3] = 0;
  param_4[6] = uVar1;
  *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) =
       *(uint *)(*(int *)(in_ECX + 0xb8) + 0x30) & 0xffffffbf | 0x20;
  FUN_00342a84(param_4);
  return 0;
}
