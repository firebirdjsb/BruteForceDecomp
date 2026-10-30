/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD6B7B1D9AA67266E17D2BB2B430ACAB38F6421222138AB0CC139EA2B1B4FD7E
 * Entry: 0x000859a0, Ghidra index: 1572, label: FUN_000859a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-only XBE labels; symbol definitions / roles pending. */
extern void FUN_00086200(void);
extern void FUN_00038940(void);
extern int FUN_00162850(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_000867d0(undefined4 param_1,undefined4 param_2);
extern int FUN_00085830(void);
extern void FUN_00086a20(void);
extern void FUN_00086870(void);
extern void FUN_00086800(int param_1,int param_2);

extern unsigned char LAB_00308570; /* VA 0x00308570 */

void FUN_000859a0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_38;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308570;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_00086200();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(param_1 + 0xc) - iVar3) / 0x3c;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x3c;
    }
    if (0x4444444U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x3c;
      }
      if (uVar4 < iVar3 + param_3) {
        if (0x4444444 - (uVar4 >> 1) < uVar4) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + (uVar4 >> 1);
        }
        iVar3 = FUN_00162850();
        if (uVar4 < iVar3 + param_3) {
          iVar3 = FUN_00162850();
          uVar4 = iVar3 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_000867d0();
        FUN_00085830();
        FUN_000867d0();
        local_8 = 0xffffffff;
        iVar2 = FUN_00162850();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00086a20();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
        }
        *(uint *)(param_1 + 0xc) = uVar4 * 0x3c + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x3c + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x3c) < param_3) {
          FUN_000867d0();
          local_8 = 2;
          FUN_00085830();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x3c;
        }
        else {
          uVar1 = FUN_000867d0();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_00086870(param_2);
        }
        FUN_00086800();
      }
    }
  }
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
