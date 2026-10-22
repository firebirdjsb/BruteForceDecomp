/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18648B6C3F65C9FDDD2C7F714DCDECD823D45B21A2B6C2353BA0D3EC46A044F1
 * Entry: 0x001d2d60, Ghidra index: 6305, label: FUN_001d2d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d2d60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  
  *param_1 = *in_EAX;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(in_EAX + 1);
  FUN_000fdba0();
  param_1[3] = in_EAX[3];
  param_1[4] = in_EAX[4];
  param_1[5] = in_EAX[5];
  param_1[6] = in_EAX[6];
  param_1[7] = in_EAX[7];
  FUN_001b02d0();
  puVar1 = (undefined4 *)in_EAX[8];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[8];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    FUN_001cd930();
  }
  return param_1;
}
