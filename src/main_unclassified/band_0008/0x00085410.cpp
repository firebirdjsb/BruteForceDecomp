/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC3EC1C34D74F3A8E1F825D56C305A05777503C8860660CE5C1B673C81AB2EEA
 * Entry: 0x00085410, Ghidra index: 1556, label: FUN_00085410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00085410(int param_1)

{
  undefined4 *puVar1;
  int *in_EAX;
  undefined4 *puVar2;
  int unaff_EBX;
  int iVar3;
  
  puVar1 = *(undefined4 **)(unaff_EBX + 8);
  puVar2 = (undefined4 *)(param_1 + 4);
  if (puVar2 != puVar1) {
    iVar3 = param_1 - (int)puVar2;
    do {
      *(undefined4 *)(iVar3 + (int)puVar2) = *puVar2;
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  *(int *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) + -4;
  *in_EAX = param_1;
  return;
}
