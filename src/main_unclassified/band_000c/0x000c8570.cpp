/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF05DB0D817E66B2F8F824F2B0B76DA9F6EBF75D41F40B314A78608D0D352343
 * Entry: 0x000c8570, Ghidra index: 2464, label: FUN_000c8570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000c8530(void);

void FUN_000c8570(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    piVar4 = (int *)(param_1 + 0x3c);
    iVar5 = 4;
    do {
      if (*piVar4 != 0) {
        uVar1 = *(uint *)(unaff_EDI + 4);
        uVar2 = 0;
        if (uVar1 != 0) {
          if (uVar1 != 0) goto LAB_000c859a;
          iVar3 = 0;
          while (*(int *)(iVar3 + 4) != *piVar4) {
            uVar2 = uVar2 + 1;
            if (uVar1 <= uVar2) goto LAB_000c85b1;
LAB_000c859a:
            iVar3 = *(int *)(*(int *)(unaff_EDI + 8) + uVar2 * 4);
          }
          if (uVar2 != 0xffffffff) goto LAB_000c85ba;
        }
LAB_000c85b1:
        FUN_000c8530();
      }
LAB_000c85ba:
      piVar4 = piVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}
