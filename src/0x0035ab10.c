/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDB4D9AAA49BD4F669FE0F1C929109CA93D200E4AF0BE12B9D06C3767D974CD7
 * Entry: 0x0035ab10, Ghidra index: 13181, label: FUN_0035ab10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-tied callee source: FUN_0035aaa0; callback ABI remains ABI_UNVERIFIED.
 * Provisional C11 declaration only; not a verified link/runtime contract. */
extern undefined4 FUN_0035aaa0(int *param_1);
undefined4 * FUN_0035ab10(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_002f8e00(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[6] = 0;
    puVar1[7] = 1;
    puVar1[8] = 0;
    puVar1[1] = (int)(1000 / (ulonglong)param_1);
    iVar2 = XAPILIB__CreateThread(0,0x3000,FUN_0035aaa0,puVar1,4,puVar1 + 4);
    puVar1[3] = iVar2;
    if (iVar2 != 0) {
      uVar3 = XAPILIB__CreateMutexA(0,0,0);
      puVar1[5] = uVar3;
      uVar3 = XAPILIB__CreateEventA(0,0,0,0);
      puVar1[2] = uVar3;
      return puVar1;
    }
    FUN_002f8e70(puVar1);
  }
  return (undefined4 *)0x0;
}
