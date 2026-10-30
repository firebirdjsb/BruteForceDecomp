/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00506AD5A8F3C7D7E32BAF03463BE10887AAD3B082CC3CF4CC2600E7D6CF1AD3
 * Entry: 0x00022e20, Ghidra index: 207, label: FUN_00022e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5908;
undefined4 FUN_00022e20(void)

{
  int in_EAX;
  
  if (((*(uint *)(in_EAX + 0x88) & 0x6000) == 0) &&
     ((*(byte *)(&DAT_004a5908 + *(int *)(in_EAX + 0x5c)) & 0x20) == 0)) {
    return 0;
  }
  return 1;
}
