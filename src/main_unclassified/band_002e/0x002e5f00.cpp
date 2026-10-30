/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 065E0ECFB9599523D44E1BEC6508AAAC991495E77CAFEBFE71FFE9CEDE56D116
 * Entry: 0x002e5f00, Ghidra index: 10493, label: FUN_002e5f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386888;
undefined4 FUN_002e5f00(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined **local_24 [6];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = XAPILIB__GetTickCount();
  *(undefined4 *)(in_ECX + 0x48c0) = uVar1;
  FUN_002e8c40();
  local_c = *(undefined4 *)(in_ECX + 0x48b4);
  local_8 = *(undefined4 *)(in_ECX + 0x48b8);
  local_24[0] = &PTR_FUN_00386888;
  local_4 = XAPILIB__GetTickCount();
  uVar1 = FUN_002e7f50(0xfffffffe,local_24,1,4);
  FUN_002e8b80();
  return uVar1;
}
