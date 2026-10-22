/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01ECAD192928C373CE99934D8F66C4B97A38183E5B3A63F06926D5F654E20103
 * Entry: 0x001ca7c0, Ghidra index: 5846, label: FUN_001ca7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001ca7c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  
  *param_1 = *in_EAX;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(in_EAX + 1);
  param_1[2] = 0;
  FUN_000fdba0();
  param_1[3] = in_EAX[3];
  param_1[4] = in_EAX[4];
  param_1[5] = in_EAX[5];
  param_1[6] = in_EAX[6];
  param_1[7] = in_EAX[7];
  param_1[8] = 0;
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
