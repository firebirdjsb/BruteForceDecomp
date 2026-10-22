/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5283028742DED6107C9F537468336862476DC2AD59CFBE522D463C6273114F20
 * Entry: 0x00219520, Ghidra index: 7498, label: FUN_00219520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004001d0;
extern uint32_t *DAT_004432f8;
extern uint32_t DAT_00469868;
extern uint32_t *DAT_0046986c;
extern uint32_t *DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t DAT_004a5b4c;
undefined4 FUN_00219520(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  int *local_14c;
  undefined4 local_148;
  undefined4 local_144 [2];
  undefined4 ***local_13c [4];
  undefined4 local_12c;
  uint local_128;
  undefined4 local_124 [2];
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  char local_104 [260];
  
  local_148 = 0;
  if (0 < DAT_004a5b4c) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 4);
  DAT_004a5b4c = DAT_004a5b4c + 1;
  local_144[0] = 0;
  if (iVar5 != *(int *)(param_1 + 8)) {
    do {
      if (*(uint *)(iVar5 + 0x18) < 0x10) {
        iVar3 = iVar5 + 4;
      }
      else {
        iVar3 = *(int *)(iVar5 + 4);
      }
      FUN_002ea78d(iVar3,0,0,local_104,0);
      pcVar2 = local_104;
      local_128 = 0xf;
      local_12c = 0;
      local_13c[0] = (undefined4 ***)((uint)local_13c[0] & 0xffffff00);
      local_108 = 0xf;
      local_10c = 0;
      local_11c = local_11c & 0xffffff00;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_0001fed0(local_104,(int)pcVar2 - (int)(local_104 + 1));
      FUN_0001f4f0(&DAT_004001d0,0,0xffffffff);
      FUN_001e8a20();
      FUN_000784c0(0);
      FUN_000784c0(0);
      if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_11c);
      }
      local_108 = 0xf;
      local_10c = 0;
      local_11c = local_11c & 0xffffff00;
      if (DAT_004698d4 != (code *)0x0) {
        (*DAT_004698d4)(DAT_004698d8);
      }
      local_14c = (int *)0x0;
      local_124[0] = 0xe0c43d05;
      ppppuVar4 = (undefined4 ****)local_13c[0];
      if (local_128 < 0x10) {
        ppppuVar4 = local_13c;
      }
      iVar3 = (**(code **)(*DAT_004432f8 + 0xc))
                        (DAT_004432f8,ppppuVar4,0x80000000,local_124,&local_14c);
      if ((iVar3 < 0) ||
         (cVar1 = FUN_002a0430(local_14c,DAT_00469868,DAT_0046986c), cVar1 != '\x01')) {
        local_148 = 0x80004005;
      }
      else {
        if (DAT_004698d4 != (code *)0x0) {
          (*DAT_004698d4)(DAT_004698d8);
        }
        local_144[0] = 0;
        (**(code **)(*DAT_0046986c + 0x28))(DAT_0046986c,&LAB_00219510,local_144);
      }
      iVar5 = iVar5 + 0x1c;
      if (local_14c != (int *)0x0) {
        (**(code **)(*local_14c + 8))(local_14c);
        local_14c = (int *)0x0;
      }
      if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_13c[0]);
      }
      local_128 = 0xf;
      local_12c = 0;
      local_13c[0] = (undefined4 ***)((uint)local_13c[0] & 0xffffff00);
    } while (iVar5 != *(int *)(param_1 + 8));
  }
  return local_148;
}
