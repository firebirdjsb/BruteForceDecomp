/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73359D2A7C9C1675902794256E9B7D19FBB4C0D51D7C2EB245D5A5ADD3138DB0
 * Entry: 0x002e59f0, Ghidra index: 10483, label: FUN_002e59f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386864;
undefined4 FUN_002e59f0(void)

{
  int in_ECX;
  undefined **local_298 [164];
  undefined4 local_8;
  
  FUN_002e8c40();
  local_298[0] = &PTR_FUN_00386864;
  FUN_002e4f30();
  local_8 = 0xffffffff;
  FUN_002e4c00(in_ECX + 0x38);
  FUN_002e7f50(0xfffffffc,local_298,1,1);
  FUN_002e4880(0);
  FUN_002e4fc0();
  FUN_002e8b80();
  return 0;
}
