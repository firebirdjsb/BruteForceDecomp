/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D006611376D60E831AD907F5DB673E12672CE31AA4530E0B7164285A4368912A
 * Entry: 0x0001cc80, Ghidra index: 117, label: FUN_0001cc80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Address from mapped original XBE; ABI/runtime mapping remains unverified. */
extern void FUN_00038940(void);
extern int FUN_001aa460(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0001d350(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int FUN_0001d090(void);
extern void FUN_0001c460(void);
extern void FUN_0001d440(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_0001d410(int param_1,int param_2);

void FUN_0001cc80(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = ((unsigned char *)(uintptr_t)0x00307ef0u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(param_1 + 0xc) - iVar3) / 0xc;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
    }
    if (0x15555555U - iVar2 < param_3) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
    }
    if (uVar5 < iVar2 + param_3) {
      if (0x15555555 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
      }
      if (uVar5 < iVar3 + param_3) {
        iVar3 = FUN_001aa460();
        uVar5 = iVar3 + param_3;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_0001d350(param_1);
      FUN_0001d090();
      FUN_0001d350(param_1);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(param_1 + 8) - iVar3) / 0xc;
      }
      if (iVar3 != 0) {
        FUN_0001c460();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(param_1 + 0xc) = uVar5 * 0xc + iVar2;
      *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar4) * 0xc;
      *(int *)(param_1 + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(param_1 + 8) - param_2) / 0xc) < param_3) {
      FUN_0001d350(param_1);
      local_8 = 2;
      FUN_0001d090();
      local_8 = 0xffffffff;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0xc;
    }
    else {
      uVar1 = FUN_0001d350(param_1);
      *(undefined4 *)(param_1 + 8) = uVar1;
      FUN_0001d440(param_2);
    }
    FUN_0001d410();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
