/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7295582B20EE019FBCF8F656D62E914420F59F09487E7BFFB14ABA0A2F691BE
 * Entry: 0x001c96f0, Ghidra index: 5831, label: FUN_001c96f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001c96f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  
  *param_1 = *in_EAX;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(in_EAX + 1);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)in_EAX + 5);
  param_1[2] = 0;
  FUN_001ac210();
  puVar1 = (undefined4 *)in_EAX[2];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[2];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
  }
  param_1[3] = 0;
  FUN_0015e760();
  if (in_EAX[3] != 0) {
    FUN_0003d730(param_1[3],in_EAX[3]);
  }
  return param_1;
}
