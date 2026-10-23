/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 001E2CB4F170C26971485DB893E8084FA7849A9B11072C97E9FDFC32EB043928
 * Entry: 0x0007fba0, Ghidra index: 1508, label: FUN_0007fba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0007fcd2) */
/* WARNING: Removing unreachable block (ram,0x0007fd50) */

undefined4 FUN_0007fba0(byte *param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  int *unaff_EDI;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int *piStack_14;
  int *piStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  byte *pbStack_4;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    pbVar2 = (byte *)(**(code **)(*unaff_EDI + 0x130))(iVar1);
    if (((((*pbVar2 & 1) != 0) && ((*pbVar2 & 4) != 0)) && (pbVar2 != param_1)) &&
       (*(int *)(pbVar2 + 0x10) == *param_2)) {
      return 1;
    }
  } while (iVar1 < 8);
  uStack_c = 0;
  uStack_8 = 0;
  pbStack_4 = (byte *)0x0;
  uStack_2c = 0;
  uStack_28 = 0;
  iStack_24 = 0;
  (**(code **)(*unaff_EDI + 0xf0))(&piStack_10,&uStack_30);
  if (piStack_14 != piStack_10) {
    piVar3 = piStack_14;
    do {
      if (*piVar3 == *param_2) {
        if (piVar3 != piStack_10) {
          iStack_24 = 0;
          iStack_20 = 0;
          uStack_1c = 0;
          (**(code **)(*unaff_EDI + 0xec))(&uStack_28,&stack0xffffffb8);
          for (uVar4 = 0; (iStack_24 != 0 && (uVar4 < (uint)(iStack_20 - iStack_24 >> 2)));
              uVar4 = uVar4 + 1) {
            piVar3 = (int *)(iStack_24 + uVar4 * 4);
            iVar1 = 0;
            while( true ) {
              iVar1 = iVar1 + 1;
              pbVar2 = (byte *)(**(code **)(*unaff_EDI + 0x130))(iVar1);
              if (((pbVar2 != pbStack_4) && ((*pbVar2 & 1) != 0)) &&
                 (((*pbVar2 & 4) != 0 && (*(int *)(pbVar2 + 0x10) == *piVar3)))) break;
              if (7 < iVar1) {
                if (iStack_24 != 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00237ec0(iStack_24);
                }
                iStack_24 = 0;
                iStack_20 = 0;
                uStack_1c = 0;
                if (iStack_34 != 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00237ec0(iStack_34);
                }
                uStack_30 = 0;
                uStack_2c = 0;
                if (piStack_14 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00237ec0(piStack_14);
                }
                return 3;
              }
            }
          }
          if (iStack_24 != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(iStack_24);
          }
        }
        break;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piStack_10);
  }
  if (iStack_34 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iStack_34);
  }
  uStack_30 = 0;
  uStack_2c = 0;
  if (piStack_14 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piStack_14);
  }
  return 0;
}
