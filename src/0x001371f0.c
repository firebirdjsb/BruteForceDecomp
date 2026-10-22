/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE2917F544AB520EA033FCE7327F776D0A5A8466B057AB6609B057F3EDFAEB9B
 * Entry: 0x001371f0, Ghidra index: 3901, label: FUN_001371f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001371f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  while( true ) {
    bVar1 = false;
    if (*(int *)(param_3 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(param_3 + 4));
    }
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    iVar4 = *(int *)(unaff_EDI + 0x10);
    if (iVar4 == *(int *)(unaff_EDI + 0x14)) break;
    do {
      iVar3 = FUN_00137360(unaff_EDI,param_2,0);
      if ((*(int *)(iVar4 + 4) <= iVar3) && (iVar3 <= *(int *)(iVar4 + 8))) {
        cVar2 = FUN_001411e0(*(undefined4 *)(unaff_EDI + 0x5c),*(undefined4 *)(iVar4 + 0xc));
        if (cVar2 == '\0') {
          FUN_00137640();
        }
        else {
          bVar1 = true;
        }
      }
      iVar4 = iVar4 + 0x10;
    } while (iVar4 != *(int *)(unaff_EDI + 0x14));
    if (((*(int *)(param_3 + 4) != 0) && (*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 4 != 0))
       || (!bVar1)) break;
    FUN_00141580();
  }
  if (*(int *)(param_3 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 4;
}
