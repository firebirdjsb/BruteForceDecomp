/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6362F356ABEF5DF3B8A4000513DFB3396F7C6A070B2124C58C0E57FCE4F0D341
 * Entry: 0x000acaf0, Ghidra index: 2065, label: FUN_000acaf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5ca0;
extern uint32_t PTR_FUN_003a0204;
extern uint32_t _DAT_004a5ca4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000acaf0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  FUN_000bb4d0(param_1,0x10);
  uVar4 = _DAT_004a5ca4 & 1;
  *param_1 = &PTR_FUN_003a0204;
  if (uVar4 == 0) {
    _DAT_004a5ca4 = _DAT_004a5ca4 | 1;
    DAT_004a5ca0 = 0xffffd7c0;
  }
  uVar5 = DAT_004a5ca0;
  iVar1 = param_1[0xb];
  uVar3 = (undefined1)DAT_004a5ca0;
  *(char *)(iVar1 + 0x3a) = (char)((uint)DAT_004a5ca0 >> 8);
  *(undefined1 *)(iVar1 + 0x38) = uVar3;
  *(char *)(iVar1 + 0x39) = (char)((uint)uVar5 >> 0x10);
  iVar1 = param_1[0xb];
  if ((iVar1 != 0) &&
     (((piVar2 = *(int **)(iVar1 + 0x24), piVar2 == (int *)0x0 || (*piVar2 != 0xc626fd5)) ||
      (piVar2[1] != 0xc)))) {
    uVar5 = FUN_000cd9c0();
    *(undefined4 *)(iVar1 + 0x24) = uVar5;
  }
  *(byte *)(param_1[0xb] + 0x3b) = *(byte *)(param_1[0xb] + 0x3b) | 0x10;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfc | 4;
  *(undefined2 *)((int)param_1 + 0xe) = 10;
  *(undefined2 *)(param_1 + 3) = 10;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 1;
  param_1[0x14] = 0;
  return param_1;
}
