/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7CE95E3C9140E0C066BDB97436FDE030871F86EAB2684A8338736EAABF0D045
 * Entry: 0x001b5af0, Ghidra index: 5679, label: FUN_001b5af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b5af0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(unaff_ESI + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(unaff_ESI + 8) - iVar2) / 0xc;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(unaff_ESI + 8) - iVar2) / 0xc;
    }
    FUN_001c8d50(unaff_ESI,*(undefined4 *)(unaff_ESI + 8),in_EAX - iVar2);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(unaff_ESI + 8) - iVar2) / 0xc)) {
      FUN_001c8cd0(unaff_ESI,local_4,*(int *)(unaff_ESI + 4) + in_EAX * 0xc,*(int *)(unaff_ESI + 8))
      ;
    }
  }
  if (param_3 != 0) {
    FUN_000512f0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_3);
  }
  return;
}
