/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D38C3436581999A7E2F592125F6D11F9697FC8D7259B7C9CC9FC29AE6D7F7D1A
 * Entry: 0x0026c960, Ghidra index: 8771, label: FUN_0026c960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432f8;
extern uint32_t DAT_00469894;
extern uint32_t DAT_004698a0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0026c960(int param_1)

{
  int iVar1;
  int *unaff_EDI;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puStack_2c;
  undefined4 local_14;
  int local_10 [3];
  
  uVar2 = 0;
  if (param_1 != 0) {
    puStack_2c = &local_14;
    iVar5 = -0x80000000;
    local_14 = 0;
    local_10[0] = -0x1f3bc2fb;
    uVar2 = 0x80004005;
    piVar4 = DAT_004432f8;
    iVar1 = (**(code **)(*DAT_004432f8 + 0xc))(DAT_004432f8,param_1,0x80000000);
    if (-1 < iVar1) {
      ppuVar3 = &puStack_2c;
      (**(code **)(*unaff_EDI + 0x20))();
      puStack_2c = (undefined4 *)0x0;
      uVar2 = thunk_FUN_002ea01d(iVar5 + 1);
      iVar1 = (**(code **)(local_10[0] + 0x10))(local_10,uVar2,iVar5,&puStack_2c);
      if ((-1 < iVar1) && (unaff_EDI == piVar4)) {
        iVar1 = FUN_0028afb0();
        if (iVar1 == 0) {
          DAT_004698a0 = iVar1;
          FUN_0028a170();
          FUN_002897b0();
          iVar1 = FUN_00289960();
          if (iVar1 == 0) {
            iVar1 = FUN_00289980();
            if (iVar1 != 0) {
              FUN_00289d80();
              FUN_00289c10();
              FUN_002897b0();
              FUN_00289680();
              *(int *)(param_1 + 4) = DAT_004698a0;
              DAT_004698a0 = 0;
              iVar1 = param_1;
              FUN_002897b0();
              iVar5 = FUN_00289960();
              if (iVar5 == 0) {
                iVar5 = FUN_00289980();
                if (iVar5 != 0) {
                  FUN_00289d80();
                  FUN_00289c10();
                  FUN_002897b0();
                  param_1 = iVar1;
                  FUN_00289680();
                }
              }
              *(int *)(param_1 + 8) = DAT_004698a0;
              FUN_002897b0();
              FUN_002899f0();
              DAT_00469894 = FUN_002ebf10();
              *(undefined4 *)(param_1 + 0xc) = DAT_00469894;
              FUN_0028a1d0();
              goto LAB_0026cafc;
            }
          }
          if (ppuVar3 != (undefined4 **)0x0) {
            (*(code *)(*ppuVar3)[2])(ppuVar3);
          }
          return 0x80004005;
        }
      }
LAB_0026cafc:
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uVar2);
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  return uVar2;
}
