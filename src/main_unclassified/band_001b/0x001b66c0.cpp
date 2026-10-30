/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 372FE3B74D1C0D4BF58AA5049DDFBBEEF8D3DFA835A65D81EB63461313FAA205
 * Entry: 0x001b66c0, Ghidra index: 5691, label: FUN_001b66c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b66c0(int param_1)

{
  undefined4 uVar1;
  uint in_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  uint local_30;
  undefined4 local_10;
  uint32_t puStack_c; /* original guest SEH 32-bit word; FS:0 pending */
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = UINT32_C(0x003082d0); /* x86 push imm32 at 0x001b66c5 */
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar3 = *(int *)(in_EDX + 4);
  if (iVar3 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = (*(int *)(in_EDX + 0xc) - iVar3) / 0x18;
  }
  if (in_ECX != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x18;
    }
    if (0xaaaaaaaU - iVar2 < in_ECX) {
      FUN_00038940();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EDX + 8) - iVar3) / 0x18;
    }
    if (local_30 < iVar2 + in_ECX) {
      if (0xaaaaaaa - (local_30 >> 1) < local_30) {
        local_30 = 0;
      }
      else {
        local_30 = local_30 + (local_30 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_EDX + 8) - iVar3) / 0x18;
      }
      if (local_30 < iVar3 + in_ECX) {
        iVar3 = FUN_0017c5a0();
        local_30 = iVar3 + in_ECX;
      }
      iVar2 = FUN_002ea01d();
      local_8 = 0;
      FUN_001cdb50(in_EDX);
      FUN_001caf10();
      FUN_001cdb50(in_EDX);
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_EDX + 4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)(in_EDX + 8) - iVar3) / 0x18;
      }
      if (iVar3 == 0) {
        *(uint *)(in_EDX + 0xc) = iVar2 + local_30 * 0x18;
        *(uint *)(in_EDX + 8) = iVar2 + (in_ECX + iVar4) * 0x18;
        *(int *)(in_EDX + 4) = iVar2;
        *unaff_FS_OFFSET = local_10;
        return;
      }
      for (; iVar3 != *(int *)(in_EDX + 8); iVar3 = iVar3 + 0x18) {
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    if ((uint)((*(int *)(in_EDX + 8) - param_1) / 0x18) < in_ECX) {
      FUN_001cdb50(in_EDX);
      local_8 = 2;
      FUN_001caf10();
      local_8 = 0xffffffff;
      *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX * 0x18;
    }
    else {
      uVar1 = FUN_001cdb50(in_EDX);
      *(undefined4 *)(in_EDX + 8) = uVar1;
      FUN_001cec00(param_1);
    }
    FUN_001cebc0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
