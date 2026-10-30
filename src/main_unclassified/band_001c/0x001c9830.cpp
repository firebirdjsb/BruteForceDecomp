/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D84CB52299DE8723098A636C2EA69E934E488FB80756DEC5D5BB54A4EDE3EBED
 * Entry: 0x001c9830, Ghidra index: 5834, label: FUN_001c9830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001c9830(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  
  *param_1 = *unaff_EBX;
  param_1[1] = 0;
  FUN_001ace50();
  puVar1 = (undefined4 *)unaff_EBX[1];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[1];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  param_1[2] = 0;
  FUN_001cd310();
  param_1[3] = 0;
  FUN_001cd310();
  param_1[4] = 0;
  FUN_001cd310();
  param_1[5] = 0;
  FUN_001cd310();
  param_1[6] = 0;
  FUN_001cd310();
  param_1[7] = 0;
  FUN_001cd310();
  param_1[8] = 0;
  FUN_001cd310();
  param_1[9] = 0;
  FUN_00242480();
  puVar1 = (undefined4 *)unaff_EBX[9];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[9];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  param_1[10] = 0;
  FUN_00242480();
  puVar1 = (undefined4 *)unaff_EBX[10];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[10];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
  }
  param_1[0xb] = 0;
  FUN_000fdba0();
  param_1[0xc] = 0;
  FUN_000fdba0();
  param_1[0xd] = 0;
  FUN_000fdba0();
  param_1[0xe] = 0;
  FUN_000fdba0();
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(unaff_EBX + 0xf);
  param_1[0x10] = unaff_EBX[0x10];
  return param_1;
}
