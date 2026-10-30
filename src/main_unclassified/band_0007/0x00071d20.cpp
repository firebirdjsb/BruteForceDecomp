/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A40559003D8C49A6147E0732924698CE2ACA01AB7E67AE0C86CF5B87D4803FA
 * Entry: 0x00071d20, Ghidra index: 1271, label: FUN_00071d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x00307a30; address-only label. Link definition and role unverified. */
extern void FUN_00038940(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0024bb30(undefined4 param_1,undefined4 param_2);
extern int FUN_00258640(void);
extern void FUN_002588f0(int param_1,int param_2,undefined1 *param_3);
extern void FUN_002588d0(undefined1 *param_1,undefined1 *param_2);

extern unsigned char LAB_00307a30;

void FUN_00071d20(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_1c;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307a30;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar4 = *(int *)(in_ECX + 4);
  if (iVar4 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(in_ECX + 0xc) - iVar4;
  }
  if (param_2 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX + 8) - iVar4;
    }
    if (-iVar3 - 1U < param_2) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX + 8) - iVar4;
    }
    if (local_1c < iVar3 + param_2) {
      if (-(local_1c >> 1) - 1 < local_1c) {
        local_1c = 0;
      }
      else {
        local_1c = local_1c + (local_1c >> 1);
      }
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(in_ECX + 8) - iVar4;
      }
      if (local_1c < iVar3 + param_2) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(in_ECX + 8) - iVar4;
        }
        local_1c = iVar4 + param_2;
      }
      /* XBE 0x00071DF6: PUSH ESI; CALL 0x002EA01D; ADD ESP,4.\n       * ESI is the capacity represented here by local_1c. The allocator\n       * receives this guest32 size word; native memory ABI is unverified. */\n      iVar3 = FUN_002ea01d(local_1c);
      local_8 = 0;
      FUN_0024bb30();
      FUN_00258640();
      FUN_0024bb30();
      local_8 = 0xffffffff;
      iVar4 = *(int *)(in_ECX + 4);
      if (iVar4 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(in_ECX + 8) - iVar4;
      }
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0();
      }
      *(uint *)(in_ECX + 0xc) = iVar3 + local_1c;
      *(uint *)(in_ECX + 8) = iVar3 + param_2 + iVar1;
      *(int *)(in_ECX + 4) = iVar3;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if ((uint)(*(int *)(in_ECX + 8) - param_1) < param_2) {
      FUN_0024bb30();
      local_8 = 2;
      FUN_00258640();
      local_8 = 0xffffffff;
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2;
    }
    else {
      uVar2 = FUN_0024bb30();
      *(undefined4 *)(in_ECX + 8) = uVar2;
      FUN_002588f0(param_1);
    }
    FUN_002588d0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
