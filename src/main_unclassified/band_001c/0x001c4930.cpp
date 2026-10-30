/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D2913E200E72F3E9A70B8BC7D6DBF69BF3EE85B8E9418B1DD65B4B7A90760DC
 * Entry: 0x001c4930, Ghidra index: 5789, label: FUN_001c4930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c4930(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x003099c0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003099c0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_001ca540();
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(param_1 + 0xc) - iVar3) / 0x344;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 8) - iVar3) / 0x344;
    }
    if (0x4e6470U - iVar2 < param_3) {
      FUN_00038940();
    }
    else {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar3) / 0x344;
      }
      if (uVar4 < iVar3 + param_3) {
        if (0x4e6470 - (uVar4 >> 1) < uVar4) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + (uVar4 >> 1);
        }
        iVar3 = FUN_001628e0();
        if (uVar4 < iVar3 + param_3) {
          iVar3 = FUN_001628e0();
          uVar4 = iVar3 + param_3;
        }
        iVar3 = FUN_002ea01d();
        local_8 = 0;
        FUN_001ce6c0();
        FUN_001cc9d0();
        FUN_001ce6c0();
        local_8 = 0xffffffff;
        iVar2 = FUN_001628e0();
        if (*(int *)(param_1 + 4) != 0) {
          FUN_00161740();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(uint *)(param_1 + 0xc) = uVar4 * 0x344 + iVar3;
        *(uint *)(param_1 + 8) = (param_3 + iVar2) * 0x344 + iVar3;
        *(int *)(param_1 + 4) = iVar3;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x344) < param_3) {
          FUN_001ce6c0();
          local_8 = 2;
          FUN_001cc9d0();
          local_8 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x344;
        }
        else {
          uVar1 = FUN_001ce6c0();
          *(undefined4 *)(param_1 + 8) = uVar1;
          FUN_001d0cc0(param_2);
        }
        FUN_001d0c90();
      }
    }
  }
  FUN_00160320();
  *unaff_FS_OFFSET = local_10;
  return;
}
