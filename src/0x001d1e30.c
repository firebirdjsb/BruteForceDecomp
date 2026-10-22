/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E07E6BDE9ACA3E09CD281E03B03F730891DC0E48DCF6E02A65E179C1A3E52E8
 * Entry: 0x001d1e30, Ghidra index: 6293, label: FUN_001d1e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d1e30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  
  *param_1 = *unaff_EBX;
  FUN_001ace50();
  puVar1 = (undefined4 *)unaff_EBX[1];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[1];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  FUN_001cd310();
  FUN_001cd310();
  FUN_001cd310();
  FUN_001cd310();
  FUN_001cd310();
  FUN_001cd310();
  FUN_001cd310();
  FUN_00242480();
  puVar1 = (undefined4 *)unaff_EBX[9];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[9];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  FUN_00242480();
  puVar1 = (undefined4 *)unaff_EBX[10];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[10];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  FUN_000fdba0();
  FUN_000fdba0();
  FUN_000fdba0();
  FUN_000fdba0();
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(unaff_EBX + 0xf);
  param_1[0x10] = unaff_EBX[0x10];
  return param_1;
}
