/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E73CF02D0CCCB0826566031B96D7A133D3F58E0CE8E7F7753B77BD88B2A340F1
 * Entry: 0x0028a7c0, Ghidra index: 9166, label: FUN_0028a7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_0028a7c0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *__src;
  
  uVar1 = *(uint *)(param_1 + 8);
  FUN_0028a460();
  __src = (undefined4 *)(param_3 * 0x10 + DAT_00469888[1]);
  _memmove(__src + uVar1 * 4,__src,(*DAT_00469888 - (int)__src >> 4) << 4);
  puVar4 = (undefined4 *)(param_1 + 0x20);
  for (iVar3 = (uVar1 & 0xfffffff) << 2; piVar2 = DAT_00469888, iVar3 != 0; iVar3 = iVar3 + -1) {
    *__src = *puVar4;
    puVar4 = puVar4 + 1;
    __src = __src + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)__src = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    __src = (undefined4 *)((int)__src + 1);
  }
  *piVar2 = *piVar2 + uVar1 * 0x10;
  FUN_0028a690(param_2);
  return;
}
