/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3EC85C9A0EC0D4550D60A91E2E78280EECAAF2D96AE4AD578E6F3D836022607
 * Entry: 0x001ca850, Ghidra index: 5847, label: FUN_001ca850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001ca850(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  
  *param_1 = *unaff_EBX;
  param_1[1] = unaff_EBX[1];
  param_1[2] = unaff_EBX[2];
  param_1[3] = unaff_EBX[3];
  param_1[4] = unaff_EBX[4];
  param_1[5] = unaff_EBX[5];
  FUN_001cd030(param_1 + 6);
  FUN_001cd130(param_1 + 10);
  FUN_001cd130(param_1 + 0xe);
  param_1[0x12] = 0;
  FUN_000fdba0();
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(unaff_EBX + 0x13);
  param_1[0x14] = unaff_EBX[0x14];
  FUN_001cae10(param_1 + 0x15);
  param_1[0x19] = 0;
  FUN_001b0aa0();
  puVar1 = (undefined4 *)unaff_EBX[0x19];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[0x19];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
  }
  param_1[0x1a] = unaff_EBX[0x1a];
  return param_1;
}
