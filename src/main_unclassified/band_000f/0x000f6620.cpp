/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFCAB7DBBF3FF05D30272608B99AADFD29A88EE92068688167A1CFD43B51ED37
 * Entry: 0x000f6620, Ghidra index: 3078, label: FUN_000f6620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000f6620(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  if (param_1[9] != 0x1f22675b) {
    if (param_1[9] != 0x1a1cb7a3) {
      return 0;
    }
    FUN_00101e50(in_ECX + 0xc);
    return 1;
  }
  if ((param_1 != (int *)0x0) && (iVar2 = (**(code **)(*param_1 + 4))(), iVar2 == 8)) {
    piVar3 = (int *)FUN_00103000();
    puVar1 = *(undefined4 **)(in_ECX + 0x240);
    puVar4 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)*puVar1;
    }
    if (puVar4 != puVar1) {
      do {
        if (puVar4[2] == *piVar3) break;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != puVar1);
      if (puVar4 != puVar1) {
        return 1;
      }
    }
    FUN_000efc40(in_ECX + 0x10);
  }
  return 1;
}
