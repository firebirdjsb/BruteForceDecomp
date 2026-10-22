/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBE19F0338C8ED7975C131771FCCB976C604D9CBBFC51D2142890EA3408990A9
 * Entry: 0x000ac890, Ghidra index: 2064, label: FUN_000ac890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5ca0;
extern uint32_t PTR_FUN_003a0268;
extern uint32_t _DAT_004a5ca4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000ac890(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  FUN_000bb4d0(param_1,0x10);
  uVar3 = _DAT_004a5ca4 & 1;
  *param_1 = &PTR_FUN_003a0268;
  if (uVar3 == 0) {
    _DAT_004a5ca4 = _DAT_004a5ca4 | 1;
    DAT_004a5ca0 = 0xffffd7c0;
  }
  uVar4 = DAT_004a5ca0;
  iVar1 = param_1[0xb];
  *(char *)(iVar1 + 0x3a) = (char)((uint)DAT_004a5ca0 >> 8);
  *(char *)(iVar1 + 0x38) = (char)uVar4;
  *(char *)(iVar1 + 0x39) = (char)((uint)uVar4 >> 0x10);
  iVar1 = param_1[0xb];
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff;
  if ((iVar1 != 0) &&
     (((piVar2 = *(int **)(iVar1 + 0x24), piVar2 == (int *)0x0 || (*piVar2 != 0xc626fd5)) ||
      (piVar2[1] != 0xc)))) {
    uVar4 = FUN_000cd9c0();
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
  }
  *(byte *)(param_1[0xb] + 0x3b) = *(byte *)(param_1[0xb] + 0x3b) | 0x10;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfc | 4;
  *(undefined2 *)((int)param_1 + 0xe) = 10;
  *(undefined2 *)(param_1 + 3) = 10;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfe;
  return param_1;
}
