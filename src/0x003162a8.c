/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCBF54C06A33B5C949085C1C78AF58B6982AB0B328EA5B95E52FD88F3DA6D1FA
 * Entry: 0x003162a8, Ghidra index: 12133, label: FUN_003162a8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-tied callee source: FUN_00315dde; callback ABI remains ABI_UNVERIFIED.
 * Provisional C11 declaration only; not a verified link/runtime contract. */
extern undefined4 FUN_00315dde(int param_1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fe98;
void FUN_003162a8(void)

{
  int in_ECX;
  
  while( true ) {
    KeSynchronizeExecution(&DAT_0032fe98,FUN_00315dde);
    if ((*(byte *)(in_ECX + 0x6f8) & 1) == 0) break;
    if ((*(byte *)(in_ECX + 0x6f8) & 0x40) != 0) {
      FUN_00315d65();
    }
    *(undefined4 *)(in_ECX + 0x6f8) = 0;
  }
  return;
}
