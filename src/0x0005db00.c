/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48EF6F60179346A4851D69B64333F23EA7AB1450EAA33ACD864B4FE3671765A9
 * Entry: 0x0005db00, Ghidra index: 973, label: FUN_0005db00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005db00(void)

{
  int iVar1;
  undefined4 *unaff_EBX;
  uint uVar2;
  
  uVar2 = 0;
  if (unaff_EBX[1] != 0) {
    do {
      iVar1 = *(int *)(unaff_EBX[2] + uVar2 * 4);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x18) != 0) {
          FUN_0005b5d0(1);
          *(undefined4 *)(iVar1 + 0x18) = 0;
        }
        if (*(int *)(iVar1 + 0x14) != 0) {
          FUN_0008f6e0();
        }
        if (*(int *)(iVar1 + 0xc) != 0) {
          FUN_0008f6e0();
        }
        if (*(int *)(iVar1 + 4) != 0) {
          FUN_0008f6e0();
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)unaff_EBX[1]);
  }
  if (unaff_EBX[2] == 0) {
    *unaff_EBX = 0;
    unaff_EBX[1] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_EBX[2]);
}
