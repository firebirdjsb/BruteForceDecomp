/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4F9A607CDF4FBA0B97547B45D7AD8CC91F4EA79E53199A096CD176A8F8B3DC1
 * Entry: 0x0008bc20, Ghidra index: 1691, label: FUN_0008bc20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0008bc20(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c [5];
  undefined4 local_8;
  
  switch(in_EAX) {
  case 0:
    uVar3 = 0x11;
    break;
  case 1:
    uVar3 = 0x12;
    break;
  case 2:
    uVar3 = 0x13;
    break;
  case 3:
    uVar3 = 0x14;
    break;
  default:
    uVar3 = 0x19;
  }
  local_1c[3] = 0;
  puVar1 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_1c[0] = 0xe7c4ccb0;
  local_8 = param_1;
  local_1c[1] = uVar3;
  puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  (**(code **)*puVar1)(local_1c);
  return;
}
