/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A08593E395BEAD9AC795C6F426A0C2C458193FABBF15FD05F46706E43F9CA5E4
 * Entry: 0x0010ce80, Ghidra index: 3484, label: FUN_0010ce80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0010ce80(int *param_1)

{
  int *in_EAX;
  
  FUN_001e97c0();
  FUN_0010a7d0();
  if (param_1[0x5e] == DAT_0046d064) {
    param_1[0x5e] = *in_EAX;
    (**(code **)(param_1[0x55] + 0x2c))();
  }
  (**(code **)(*param_1 + 0x1c))();
  return;
}
