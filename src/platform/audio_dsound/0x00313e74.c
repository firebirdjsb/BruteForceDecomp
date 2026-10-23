/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC235A2E01B9B8886401B1106D05FFE79E07DBE41EE3CFF6A9C2D264D6C30043
 * Entry: 0x00313e74, Ghidra index: 12042, label: FUN_00313e74
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f500;
extern uint32_t DAT_0032f528;
int FUN_00313e74(uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  int local_8;
  
  local_8 = 0;
  *(uint *)(in_ECX + 8) = param_1;
  if (((param_1 & 0x182000) == 0) && ((param_1 & 0x10) == 0)) {
    *(undefined4 *)(in_ECX + 0x20) = 600;
  }
  else {
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  iVar1 = FUN_00312d43(param_2,param_3 == 0);
  if (iVar1 == 0) {
    FUN_00311c80(param_3);
  }
  *(int *)(in_ECX + 0x1c) = -*(int *)(in_ECX + 0x20);
  if ((*(byte *)(in_ECX + 8) & 0x10) != 0) {
    puVar2 = (undefined4 *)FUN_003148cf(0x61645344,0x7c,1);
    local_8 = (-(uint)(puVar2 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
    *(undefined4 **)(in_ECX + 0xb4) = puVar2;
    if (-1 < local_8) {
      puVar3 = &DAT_0032f528;
      for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar2 = &DAT_0032f500;
      puVar3 = (undefined4 *)(*(int *)(in_ECX + 0xb4) + 0x4c);
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)(*(int *)(in_ECX + 0xb4) + 0x78) = 0x1ff;
    }
  }
  return local_8;
}
