/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC5FB882BA3153F7BE7161E320014524A2FF1DF6F63B451837EACD537738673F
 * Entry: 0x00153f60, Ghidra index: 4431, label: FUN_00153f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x00307d20; address-only external declaration.
 * Linked symbol definition, role and calling convention are unverified. */
extern unsigned char LAB_00307d20;
void FUN_00153f60(int param_1,uint param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307d20;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  FUN_00154290();
  iVar3 = *(int *)(in_ECX + 4);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(in_ECX + 0xc) - iVar3) / 0x54;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0x54;
    }
    if (0x30c30c3U - iVar2 < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar3) / 0x54;
    }
    if (uVar5 < iVar2 + param_2) {
      if (0x30c30c3 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 8) - iVar3) / 0x54;
      }
      if (uVar5 < iVar3 + param_2) {
        iVar3 = FUN_00153e80();
        uVar5 = iVar3 + param_2;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_00154390();
      FUN_00154340();
      FUN_00154390();
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_ECX + 8) - iVar3) / 0x54;
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = uVar5 * 0x54 + iVar2;
      *(uint *)(in_ECX + 8) = (param_2 + iVar4) * 0x54 + iVar2;
      *(int *)(in_ECX + 4) = iVar2;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)((*(int *)(in_ECX + 8) - param_1) / 0x54) < param_2) {
      FUN_00154390();
      local_8 = 2;
      FUN_00154340();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x54;
    }
    else {
      uVar1 = FUN_00154390();
      *(undefined4 *)(in_ECX + 8) = uVar1;
      FUN_001543f0(param_1);
    }
    FUN_001543c0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
