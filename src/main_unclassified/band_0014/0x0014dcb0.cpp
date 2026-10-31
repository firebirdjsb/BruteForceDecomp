/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53BB58EA09AC43B4130159B62D50FEA0AB22794C6E8FC4DD80787DF516CD9D91
 * Entry: 0x0014dcb0, Ghidra index: 4378, label: FUN_0014dcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched forward declaration only; original x86 ABI_UNVERIFIED. */
extern void FUN_0014dc50(void);
void FUN_0014dcb0(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  char unaff_retaddr;
  int local_c [3];
  
  local_c[0] = *(int *)(in_EAX + 0x1cc);
  local_c[2] = 0;
  local_c[1] = 0;
  FUN_0014dc50();
  piVar2 = (int *)local_c[param_1];
  if ((piVar2 != (int *)0x0) &&
     ((cVar3 = (**(code **)(*piVar2 + 0x20))(), cVar3 == '\0' ||
      (iVar4 = (**(code **)(*piVar2 + 0x5c))(), iVar4 != unaff_EBX)))) {
    (**(code **)(*piVar2 + 0x38))();
    (**(code **)(*piVar2 + 0x28))();
    if (param_1 == unaff_EBP) {
      *(int *)(in_EAX + 0x1cc) = param_1;
    }
    if (unaff_retaddr != '\0') {
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x1d4) + 0x260);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  return;
}
