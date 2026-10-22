/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E74EFE4B704B34FC22DB2AC933FFA034630E5E10F2FCB9AD21B99BAE8C1CAD4
 * Entry: 0x000572a0, Ghidra index: 848, label: FUN_000572a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a3f80;
undefined1 FUN_000572a0(byte *param_1,int param_2)

{
  int iVar1;
  undefined4 in_EAX;
  byte bVar2;
  int in_ECX;
  undefined1 uVar3;
  undefined **local_1c [2];
  int local_14;
  int local_c;
  
  iVar1 = param_2;
  uVar3 = 0;
  FUN_00056d50(param_2,in_EAX);
  FUN_000581f0(&param_2,*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8),local_1c,0);
  if (((param_2 != *(int *)(in_ECX + 8)) && (*(int *)(param_2 + 8) == local_14)) &&
     (*(int *)(param_2 + 0x10) == local_c)) {
    if (iVar1 == *(int *)(param_2 + 8)) {
      bVar2 = *(byte *)(param_2 + 0x14) >> 1;
    }
    else {
      bVar2 = *(byte *)(param_2 + 0x14) >> 2;
    }
    param_1[1] = bVar2 & 1;
    *param_1 = *(byte *)(param_2 + 0x14) & 1;
    uVar3 = 1;
  }
  local_1c[0] = &PTR_FUN_003a3f80;
  if (local_c != 0) {
    FUN_0008f6e0();
  }
  if (local_14 != 0) {
    FUN_0008f6e0();
  }
  return uVar3;
}
