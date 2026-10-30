/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9FD91D3FCBEE1F34D512855CD21E596C21EA16BEEE4C06C2952439DE678A2148
 * Entry: 0x0005dbe0, Ghidra index: 975, label: FUN_0005dbe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0005b770(int param_1);

void FUN_0005dbe0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *unaff_ESI;
  
  uVar2 = 0;
  if (unaff_ESI[1] != 0) {
    do {
      iVar1 = *(int *)(unaff_ESI[2] + uVar2 * 4);
      if (iVar1 != 0) {
        FUN_0005b770(iVar1);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)unaff_ESI[1]);
  }
  if (unaff_ESI[2] == 0) {
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_ESI[2]);
}
