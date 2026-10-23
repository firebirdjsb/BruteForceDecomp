/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F00525729D4A2A45EADAD7A918B42A19075F6AF0B645DFF633C75AA77B27D853
 * Entry: 0x00210bf0, Ghidra index: 7434, label: FUN_00210bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00210bf0(int param_1)

{
  undefined4 *puVar1;
  uint *unaff_EBX;
  undefined4 *unaff_EDI;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
  param_1 = CONCAT31(param_1._1_3_,1);
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      param_1 = CONCAT31(param_1._1_3_,*unaff_EBX < (uint)puVar1[3]);
      if (*unaff_EBX < (uint)puVar1[3]) {
        puVar1 = (undefined4 *)*puVar1;
      }
      else {
        puVar1 = (undefined4 *)puVar1[2];
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  puVar1 = (undefined4 *)FUN_00129c60(&param_1,param_1,unaff_EBX);
  *unaff_EDI = *puVar1;
  *(undefined1 *)(unaff_EDI + 1) = 1;
  return;
}
