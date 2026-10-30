/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45E898663908F698A23DC7DBCD7720F9FF0533179B00E90AD3CF2F9545F6C971
 * Entry: 0x00146340, Ghidra index: 4208, label: FUN_00146340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00146340(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x184) != DAT_0046d064) {
    FUN_00160da0(0xffffffff,1);
  }
  return;
}
