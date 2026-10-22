/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5849B9B8D816E2A08772130B286789C4D4F4ACA4BD414D4324B4318EE80B87E3
 * Entry: 0x000b6510, Ghidra index: 2191, label: FUN_000b6510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b54;
extern uint32_t PTR_FUN_0039fdc4;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000b6510(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_EAX;
  int iVar3;
  
  FUN_000b2230();
  piVar2 = DAT_00469b54;
  *in_EAX = &PTR_FUN_0039fdc4;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1d] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x1f] = 0;
  in_EAX[0x25] = 0;
  in_EAX[0x26] = 0;
  iVar3 = (**(code **)(*piVar2 + 0x48))();
  in_EAX[0x20] = *(undefined4 *)(iVar3 + 400);
  in_EAX[0x21] = *(undefined4 *)(iVar3 + 0x194);
  in_EAX[0x22] = *(undefined4 *)(iVar3 + 0x198);
  in_EAX[0x23] = *(undefined4 *)(iVar3 + 0x19c);
  uVar1 = *(undefined4 *)(iVar3 + 0x1a0);
  in_EAX[0x28] = 0;
  in_EAX[0x24] = uVar1;
  return;
}
