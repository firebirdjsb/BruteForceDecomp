/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 304C605F9EAE8B500B2803748E6D28C123B5BA6967081A4EC2698EA1F2655D0C
 * Entry: 0x00227f40, Ghidra index: 7657, label: FUN_00227f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00227f40(void)

{
  undefined4 in_ECX;
  int in_EDX;
  undefined4 local_4;
  
  if (*(int *)(in_EDX + 0xac) != DAT_0046d064) {
    local_4 = 0;
    FUN_000defa0(1,0,in_ECX,&local_4,0x3f800000);
  }
  return;
}
