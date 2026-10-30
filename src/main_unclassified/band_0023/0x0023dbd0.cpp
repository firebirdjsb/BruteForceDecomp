/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8573112A1FD45985BE7986E63DF4DEC87F6057ED600F1514F39A4FF40453806
 * Entry: 0x0023dbd0, Ghidra index: 7967, label: FUN_0023dbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0023dbd0(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  /* XBE 0x0023DC06: MOV [EBP-0x10],ESP saves the guest ESP
   * after original x86 stack alignment, FS:0 registration and
   * 0xA0-byte stack allocation. The Ghidra synthetic host-pointer
   * assignments 'puStack_24' and 'local_20' were NEVER read in C.
   * Remove only those dead assignments; do not simulate aligned
   * guest ESP or SEH by manufacturing host stack pointers.
   * Native guest stack, SSE scratch, FS:0 handling remain TODO. */
  uint local_7c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_1c;
  /* Original XBE 0x0023DBE8 PUSH 0x00307AE0 is an Xbox 32-bit
   * SEH handler VA, not the address of a host C label.
   * Ghidra's 'puStack_18 = &LAB_00307ae0' was written only once
   * and NEVER read in C; preserve evidence, drop the dead alias.
   * Actual FS:0 exception registration still requires a guest ABI. */
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_1c;
  local_40 = *(undefined4 *)(param_4 + 0x38);
  uStack_3c = *(undefined4 *)(param_4 + 0x3c);
  uStack_38 = *(undefined4 *)(param_4 + 0x40);
  uStack_34 = *(undefined4 *)(param_4 + 0x44);
  puVar1 = &local_40;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    local_7c = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc) - iVar4;
    puVar1 = (undefined4 *)(iVar3 * 0x38e38e39);
    local_7c = iVar3 / 0x48;
  }
  if (param_3 != 0) {
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x48;
    }
    if (0x38e38e3U - iVar3 < param_3) {
              puVar1 = (undefined4 *)FUN_00038940();
    }
    else {
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x48;
      }
      if (local_7c < iVar3 + param_3) {
        if (0x38e38e3 - (local_7c >> 1) < local_7c) {
          local_7c = 0;
        }
        else {
          local_7c = local_7c + (local_7c >> 1);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)(param_1 + 8) - iVar4) / 0x48;
        }
                    if (local_7c < iVar4 + param_3) {
                          iVar4 = FUN_0023dba0();
          local_7c = iVar4 + param_3;
        }
        puVar1 = (undefined4 *)FUN_002ea01d();
        local_14 = 0;
        FUN_0023dff0(param_1);
        FUN_0023df70();
        FUN_0023dff0(param_1);
        local_14 = 0xffffffff;
        iVar4 = *(int *)(param_1 + 4);
        if (iVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int *)(param_1 + 8) - iVar4) / 0x48;
        }
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0();
        }
        *(undefined4 **)(param_1 + 0xc) = puVar1 + local_7c * 0x12;
        *(undefined4 **)(param_1 + 8) = puVar1 + (param_3 + iVar3) * 0x12;
        *(undefined4 **)(param_1 + 4) = puVar1;
      }
      else {
        if ((uint)((*(int *)(param_1 + 8) - param_2) / 0x48) < param_3) {
                          FUN_0023dff0(param_1);
          local_14 = 2;
          FUN_0023df70();
          local_14 = 0xffffffff;
          *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x48;
        }
        else {
          uVar2 = FUN_0023dff0(param_1);
          *(undefined4 *)(param_1 + 8) = uVar2;
          FUN_0023e080(param_2);
        }
        puVar1 = (undefined4 *)FUN_0023e020();
      }
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return puVar1;
}
