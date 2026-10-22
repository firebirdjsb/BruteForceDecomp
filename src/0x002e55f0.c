/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2ECCCCADEEB35766F8E1639B873ECB8B47F588BE93C5E33876092C602D7050D
 * Entry: 0x002e55f0, Ghidra index: 10471, label: FUN_002e55f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386788;
void FUN_002e55f0(void)

{
  undefined4 *in_ECX;
  
  FUN_002e8c40();
  *in_ECX = &PTR_FUN_00386788;
  FUN_002e4f30();
  in_ECX[0xac] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0xab) = 0;
  return;
}
