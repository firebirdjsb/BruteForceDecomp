/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 887C71938D3B88E03AD2AA1CCB581F496028AD38B42061412C6334FEB6D5998E
 * Entry: 0x000be9c0, Ghidra index: 2322, label: FUN_000be9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00055390(void);

void FUN_000be9c0(void)

{
  char cVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (*(int *)(unaff_ESI[3] + 4) == 3) {
    iVar2 = (**(code **)(*unaff_ESI + 0xf4))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*unaff_ESI + 0xf4))();
      cVar1 = *(char *)(*(int *)(iVar2 + 0x794) + 0xd);
      if ((cVar1 != '\0') && (cVar1 != '\0')) {
        FUN_00055390();
        return;
      }
    }
  }
  return;
}
