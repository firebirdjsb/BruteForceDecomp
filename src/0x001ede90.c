/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3E44CACDC72B55F4EB558B3D9419DCE9A4E3E5660B1D92DF93C2CA86A117E7D
 * Entry: 0x001ede90, Ghidra index: 6951, label: FUN_001ede90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_Parameters_004071bc[];
void FUN_001ede90(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  
  if ((in_ECX == 0) || (piVar1 = (int *)FUN_002e4a30(s_Parameters_004071bc), piVar1 == (int *)0x0))
  {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  iVar5 = 0;
  if (0 < *(int *)(unaff_ESI + 0x24)) {
    piVar1 = (int *)(unaff_ESI + 0x28);
    do {
      if ((*piVar1 == 0) ||
         (piVar2 = (int *)FUN_002e4a30(s_Parameters_004071bc), piVar2 == (int *)0x0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar2;
      }
      if (iVar3 == iVar4) {
        piVar2 = piVar1;
        iVar3 = iVar5;
        if (iVar5 < *(int *)(unaff_ESI + 0x24)) {
          do {
            *piVar2 = piVar2[1];
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 1;
          } while (iVar3 < *(int *)(unaff_ESI + 0x24));
        }
        *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + -1;
      }
      else {
        iVar5 = iVar5 + 1;
        piVar1 = piVar1 + 1;
      }
    } while (iVar5 < *(int *)(unaff_ESI + 0x24));
  }
  return;
}
