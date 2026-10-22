/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F144B41640CAB875043E84FDFA25F643BB90BDAD87ED666540F6AB57D43617BB
 * Entry: 0x00384a53, Ghidra index: 13654, label: FUN_00384a53
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fcc;
void FUN_00384a53(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1f) = 0xff;
  *(int *)(param_1 + 0x14) = DAT_004a8fcc;
  DAT_004a8fcc = param_1;
  return;
}
