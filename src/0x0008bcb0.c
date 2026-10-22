/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0C4037D35CE915FA004F67214161A8393A73EA9AB1B1DF2717C3DAEEC19E381
 * Entry: 0x0008bcb0, Ghidra index: 1692, label: FUN_0008bcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0008bcb0(undefined4 param_1)

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
  local_1c[0] = 0x16043841;
  local_8 = param_1;
  local_1c[1] = uVar3;
  puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  (**(code **)*puVar1)(local_1c);
  return;
}
