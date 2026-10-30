/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E1354BD8407C0101FEE5C77C761B1326C2C20A378349B484B078E96E95B2A3D
 * Entry: 0x002249d0, Ghidra index: 7623, label: FUN_002249d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00394850;
void FUN_002249d0(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[0x41] = 0;
  in_EAX[0x45] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  *in_EAX = &PTR_LAB_00394850;
  in_EAX[0x44] = 0xfffffff3;
  in_EAX[0x43] = 0xfffffffc;
  in_EAX[0x46] = param_1;
  return;
}
