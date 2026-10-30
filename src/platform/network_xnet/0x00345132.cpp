/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63408356A6CEDDD87AA97EA2B4FC1729CF57F03A7CB9BAB837D9363982621F61
 * Entry: 0x00345132, Ghidra index: 12792, label: FUN_00345132
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
void FUN_00345132(int param_1,void *param_2,size_t param_3,int param_4)

{
  XONLINES__send(DAT_0040f5b4,param_1,param_2,param_3,param_4);
  return;
}
