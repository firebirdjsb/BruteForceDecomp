/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B9745721EC86A0968D942EADAD8D8FADA507B3776F917815AA1C305F536B685
 * Entry: 0x001e53f0, Ghidra index: 6796, label: FUN_001e53f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t PTR_FUN_00396864;
extern uint32_t PTR_FUN_00396cac;
void FUN_001e53f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *local_8;
  int local_4;
  
  local_8 = (undefined4 *)((int)param_1 + 0x250);
  local_4 = 0x19;
  do {
    puVar1 = (undefined4 *)FUN_002ea01d(0x130);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_00396864;
      puVar1[4] = &PTR_FUN_00396cac;
      uVar2 = FUN_00279bb0(puVar1 + 6);
      puVar1[7] = uVar2;
      puVar1[8] = 0;
      puVar1[5] = 0;
      *(undefined2 *)((int)puVar1 + 0x2e) = 0;
      *(undefined2 *)(puVar1 + 0xb) = 0;
      puVar1[10] = 0;
      *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) & 0xfd | 1;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined1 *)((int)puVar1 + 5) = 0;
      *(undefined1 *)((int)puVar1 + 6) = 0;
      puVar1[3] = 0x3f800000;
      puVar1[2] = 0x3f800000;
    }
    *local_8 = puVar1;
    local_8 = local_8 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  param_1 = (int *)((int)param_1 + 0x5c);
  local_8 = (undefined4 *)0x1;
  iVar5 = 0x14;
  do {
    piVar3 = (int *)FUN_002ea01d(4);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = (int)local_8;
      if (((0x13 < iVar5) && (iVar5 < 0x31)) &&
         (iVar4 = *(int *)(iVar5 + DAT_00469948) + 1, *(int *)(iVar5 + DAT_00469948) = iVar4,
         iVar4 == 1)) {
        FUN_001e7880();
      }
    }
    *param_1 = (int)piVar3;
    local_8 = (undefined4 *)((int)local_8 + 1);
    iVar5 = iVar5 + 4;
    param_1 = param_1 + 1;
  } while (iVar5 < 0x31);
  return;
}
