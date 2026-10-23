/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FABF7B391C35F2A06510586AC3E69F4CB1380FF073B2AF63AC7E4D65703AB52F
 * Entry: 0x003821f6, Ghidra index: 13585, label: FUN_003821f6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412754;
extern uint32_t DAT_00412770;
extern uint32_t DAT_00412798;
void FUN_003821f6(void)

{
  DAT_00412798 = 1;
  KeSetTimer(&DAT_00412770,0xfd050f80,0xffffffff,&DAT_00412754);
  return;
}
