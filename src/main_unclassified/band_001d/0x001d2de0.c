/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E451183F345C3EEF95F3DF30B79B88D76814644D42102889CEEC906293393C17
 * Entry: 0x001d2de0, Ghidra index: 6306, label: FUN_001d2de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d2de0(undefined4 *param_1)

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
  FUN_001d5ca0(unaff_EBX + 6);
  FUN_001d5e40();
  FUN_001d5e40();
  FUN_000fdba0();
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(unaff_EBX + 0x13);
  param_1[0x14] = unaff_EBX[0x14];
  FUN_001d3680(unaff_EBX + 0x15);
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
