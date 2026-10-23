/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5102D9F1A274221DED000A4C85BD938FFD49CED42799D6CACBDF47F5C340212C
 * Entry: 0x002595c0, Ghidra index: 8502, label: FUN_002595c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002595c0(int *param_1)

{
  char in_AL;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *unaff_ESI;
  
  if (in_AL == '\0') {
    iVar2 = param_1[7];
    if ((short)iVar2 < 7) {
      (**(code **)(*unaff_ESI + 0x14))();
    }
    else {
      (**(code **)(*unaff_ESI + 0x14))();
      if (7 < (short)iVar2) {
        (**(code **)(*unaff_ESI + 0x14))();
      }
    }
    uVar1 = (**(code **)(*unaff_ESI + 0x14))();
    return uVar1;
  }
  (**(code **)(*param_1 + 0x18))();
  if (in_ECX < 0x100) {
    iVar2 = thunk_FUN_002ea01d(in_ECX * 4);
    FUN_002596e0(in_ECX);
    while (in_ECX != 0) {
      in_ECX = in_ECX + -1;
      *(int *)(iVar2 + in_ECX * 4) = param_1[1];
      param_1 = (int *)param_1[3];
    }
    iVar3 = (**(code **)(*unaff_ESI + 0x14))();
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  return 0x80004005;
}
