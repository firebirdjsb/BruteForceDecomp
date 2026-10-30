/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 460A130CBB313977F0F23018D14DEBD3C4CE7DDC62D98276EEF4F3AF70EABDBC
 * Entry: 0x000c92e0, Ghidra index: 2485, label: FUN_000c92e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000bb9d0(int *param_1);

extern uint32_t DAT_004a5c98;
extern uint32_t DAT_004a5c9c;
extern uint32_t PTR_FUN_0039f1e8;
undefined4 * FUN_000c92e0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_000bb4d0(param_1,0x10);
  iVar1 = param_1[0xb];
  *param_1 = &PTR_FUN_0039f1e8;
  param_1[0x15] = 0x3e99999a;
  param_1[0x14] = 0x3ecccccd;
  param_1[0x16] = 0x3f4ccccd;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0x40400000;
  if ((iVar1 != 0) &&
     (((piVar2 = *(int **)(iVar1 + 0x24), piVar2 == (int *)0x0 || (*piVar2 != 0x97ecc77)) ||
      (piVar2[1] != 0x18)))) {
    uVar3 = FUN_000cd9c0();
    *(undefined4 *)(iVar1 + 0x24) = uVar3;
  }
  *(byte *)(param_1[0xb] + 0x3b) = *(byte *)(param_1[0xb] + 0x3b) | 0x10;
  if ((DAT_004a5c9c & 1) == 0) {
    DAT_004a5c9c = DAT_004a5c9c | 1;
    DAT_004a5c98 = 0xff6aa0ff;
  }
  uVar3 = DAT_004a5c98;
  iVar1 = param_1[0xb];
  *(char *)(iVar1 + 0x3a) = (char)((uint)DAT_004a5c98 >> 8);
  *(char *)(iVar1 + 0x39) = (char)((uint)uVar3 >> 0x10);
  *(char *)(iVar1 + 0x38) = (char)uVar3;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfc;
  FUN_000bb9d0(param_1);
  *(byte *)((int)param_1 + 0x13) = *(byte *)((int)param_1 + 0x13) | 1;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 4;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x13] = 0;
  return param_1;
}
