/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5DF76FE41E02C54B85234C53D5976938B70C64CAC9F939E4576E4C7B44C2119
 * Entry: 0x001ed8b0, Ghidra index: 6939, label: FUN_001ed8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046cfd8;
extern uint32_t PTR_FUN_00396bec;
extern char s_Parameters_004071bc[];
undefined1 FUN_001ed8b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *local_28;
  undefined **local_24 [6];
  undefined4 local_c;
  uint local_8;
  undefined4 *local_4;
  
  uVar8 = 0;
  cVar1 = FUN_002e5880();
  if (cVar1 != '\0') {
    pcVar10 = s_Parameters_004071bc;
    FUN_002e5920(s_Parameters_004071bc);
    iVar2 = FUN_002e4a30(pcVar10);
    FUN_002e8c40();
    local_4 = (undefined4 *)0x0;
    local_8 = 0;
    local_24[0] = &PTR_FUN_00396bec;
    local_c = DAT_0046cfd8;
    if (*(int *)(iVar2 + 0x204) == 1) {
      local_28 = *(undefined4 **)(iVar2 + 0x210);
      uVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x218))(&local_28);
      iVar4 = thunk_FUN_002ea01d(uVar3);
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x21c))(&stack0xffffffd4,iVar4);
      puVar5 = (undefined4 *)thunk_FUN_002ea01d(uVar3);
      local_28 = puVar5;
      uVar6 = FUN_001ebe60(uVar3);
      if (local_4 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_4);
      }
      if (uVar6 != 0) {
        local_4 = (undefined4 *)thunk_FUN_002ea01d(uVar6);
        local_8 = uVar6;
      }
      puVar9 = local_4;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar4);
      }
      if (local_28 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_28);
      }
    }
    *(undefined1 *)(param_1 + 0x5770) = 0;
    FUN_002e7f50(0xfffffffd,local_24,1,2);
    if ((*(int *)(iVar2 + 0x204) == 1) && (*(char *)(param_1 + 0x5770) == '\0')) {
      FUN_001eee10(local_24);
    }
    *(uint *)(iVar2 + 0x21c) = *(uint *)(iVar2 + 0x21c) & 0xfffffff7;
    uVar3 = 1;
    FUN_002e5920(1);
    FUN_002e4880(uVar3);
    FUN_002e5d90(0);
    uVar8 = 1;
    local_24[0] = &PTR_FUN_00396bec;
    if (local_4 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_4);
    }
    FUN_002e8b80();
  }
  return uVar8;
}
