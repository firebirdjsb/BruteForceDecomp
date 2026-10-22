/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12275E23ADF7E89D82DB773E8F61357E13D797EC4A2979D295E82F85F1944ABB
 * Entry: 0x000b82d0, Ghidra index: 2220, label: FUN_000b82d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000b82d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00469ab0;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(DAT_00469ab0 + 0x1378);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar1 + 0x1374);
  iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0xe0);
  if (*(int *)(param_1 + 0x78) != iVar2) {
    FUN_0008f6a0(iVar2);
  }
  iVar2 = FUN_000b9120(iVar1);
  if (iVar2 != 0) {
    if (param_1 + 0x2c != 0) {
      FUN_000b25a0(param_1 + 0x2c,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(int *)(param_1 + 100) = iVar2;
  FUN_000b7fb0();
  iVar2 = FUN_000b9120(DAT_00469ab0);
  if (iVar2 != 0) {
    if (param_1 + 0x2c != 0) {
      FUN_000b25a0(param_1 + 0x2c,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(int *)(param_1 + 0x68) = iVar2;
  iVar2 = *(int *)(param_1 + 0x68);
  *(short *)(iVar2 + 4) = (short)(int)*(float *)(*(int *)(param_1 + 100) + 100);
  *(undefined2 *)(iVar2 + 6) = 0;
  return;
}
