/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19FA00C8727FF84DEE4D8369B3F57919A559EF7DB0E0EBD5C135C8FB3C992997
 * Entry: 0x00338406, Ghidra index: 12474, label: FUN_00338406
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00338406(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,int param_11,undefined4 *param_12)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_11 + 0x128);
  FUN_00330c2d(puVar1);
  *(undefined4 *)(param_11 + 0x130) = param_10;
  *puVar1 = &LAB_003383fe;
  *(undefined4 *)(param_11 + 0x134) = 0;
  *(undefined1 **)(param_11 + 0xe8) = &LAB_0033836d;
  *(undefined1 **)(param_11 + 0xec) = &LAB_00337d12;
  *(undefined1 **)(param_11 + 0xf0) = &LAB_00338399;
  *(undefined4 *)(param_11 + 0xf4) = 0;
  *(undefined4 *)(param_11 + 0xf8) = 0;
  *(undefined4 **)(param_11 + 0xfc) = puVar1;
  *(undefined4 *)(param_11 + 0x100) = 0;
  FUN_00330c2d(param_11);
  *(undefined4 *)(param_11 + 8) = param_10;
  *(undefined4 *)(param_11 + 0xc) = 0;
  *(undefined4 *)(param_11 + 0x10) = 0;
  if ((param_12 == (undefined4 *)0x0) || (param_12[1] == 0)) {
    iVar2 = FUN_00333726(param_1,param_11 + 0x24);
    if (iVar2 < 0) {
      return;
    }
  }
  else {
    *(undefined4 *)(param_11 + 0x24) = param_12[1];
    *(undefined4 *)(param_11 + 0x28) = param_12[2];
    *(undefined4 *)(param_11 + 0x2c) = param_12[3];
  }
  if (param_12 != (undefined4 *)0x0) {
    *(undefined4 *)(param_11 + 0x18) = *param_12;
  }
  *(undefined4 *)(param_11 + 0xa4) = param_3;
  *(undefined4 *)(param_11 + 0xa8) = param_4;
  *(undefined4 *)(param_11 + 0x1c) = param_9;
  *(undefined4 *)(param_11 + 0x40) = param_7;
  *(undefined4 *)(param_11 + 0xd0) = 0;
  *(undefined4 *)(param_11 + 0xd4) = 0;
  *(undefined4 *)(param_11 + 0xe0) = 0;
  *(undefined4 *)(param_11 + 0x44) = param_8;
  *(undefined4 *)(param_11 + 0xd8) = param_8;
  *(undefined4 *)(param_11 + 0xdc) = 0;
  FUN_00338276(param_2,param_5,param_6,param_11);
  return;
}
