/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C712D16733AA7B16C2636AB5F92A22FBC3273B4AD702D819B1DCB7DBD4DD603
 * Entry: 0x0005dc80, Ghidra index: 977, label: FUN_0005dc80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005dc80(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_ESI;
  
  iVar3 = 4;
  if (*unaff_ESI != 0) {
    iVar3 = *unaff_ESI * 2;
  }
  iVar1 = thunk_FUN_002ea01d(iVar3 * 4);
  uVar2 = 0;
  if (unaff_ESI[1] != 0) {
    do {
      *(undefined4 *)(iVar1 + uVar2 * 4) = *(undefined4 *)(unaff_ESI[2] + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)unaff_ESI[1]);
  }
  if (unaff_ESI[2] == 0) {
    unaff_ESI[2] = iVar1;
    *unaff_ESI = iVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_ESI[2]);
}
