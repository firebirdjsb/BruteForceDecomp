/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB1D835D0F7EF8ADE813D99E1897999C139D8389DD82EF806D3059AB63B3303B
 * Entry: 0x0021d370, Ghidra index: 7538, label: FUN_0021d370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callback/address references (not an ABI verification).
 * Original x86 register, stack and indirect call contracts remain ABI_UNVERIFIED. */
extern void FUN_00076fc0(void);
extern void FUN_00219450(void);
void FUN_0021d370(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *unaff_ESI;
  int local_4;
  
  puVar4 = unaff_ESI + 0x13;
  if (unaff_ESI[0x13] != 0) {
    local_4 = 8;
    puVar2 = puVar4;
    do {
      iVar3 = *(int *)*puVar2;
      if (iVar3 != 0) {
        FUN_0001fe00(iVar3,4,*(undefined4 *)(iVar3 + -4),FUN_00076fc0);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar3 + -4);
      }
      puVar2 = puVar2 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    if (*puVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*puVar4);
    }
    puVar2 = puVar4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  uVar5 = unaff_ESI[0x1b];
  if (uVar5 == 0) {
    *unaff_ESI = 0;
    if (param_2 != 0) {
      *unaff_ESI = param_2;
      puVar1 = (undefined4 *)thunk_FUN_002ea01d(param_2 << 5);
      *puVar4 = (uint)puVar1;
      for (iVar3 = (*unaff_ESI & 0x7ffffff) << 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar1 = 0;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      iVar3 = 1;
      puVar2 = unaff_ESI + 0x14;
      do {
        *puVar2 = *puVar4 + *unaff_ESI * iVar3 * 4;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < 8);
      uVar5 = *unaff_ESI;
      puVar2 = (uint *)thunk_FUN_002ea01d(uVar5 * 0x14 + 4);
      puVar4 = (uint *)0x0;
      if (puVar2 != (uint *)0x0) {
        *puVar2 = uVar5;
        puVar4 = puVar2 + 1;
        puVar2 = puVar4;
        if (-1 < (int)(uVar5 - 1)) {
          do {
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[4] = 0;
            *puVar2 = 0;
            uVar5 = uVar5 - 1;
            puVar2 = puVar2 + 5;
          } while (uVar5 != 0);
        }
      }
      unaff_ESI[0x1b] = (uint)puVar4;
    }
    puVar4 = unaff_ESI;
    for (iVar3 = 8; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
    }
    puVar4 = unaff_ESI + 9;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    unaff_ESI[0x1c] = 0;
    unaff_ESI[0x1d] = 0;
    return;
  }
  FUN_0001fe00(uVar5,0x14,*(undefined4 *)(uVar5 - 4),FUN_00219450);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(uVar5 - 4);
}
