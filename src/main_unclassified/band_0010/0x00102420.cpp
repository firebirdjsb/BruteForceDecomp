/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83581EF232CF4BE5688C1F81BCC8C2EB3A05A26CE8CC0C2AE2B7CC617DADE082
 * Entry: 0x00102420, Ghidra index: 3268, label: FUN_00102420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e358;
void FUN_00102420(void)

{
  undefined4 *in_EAX;
  
  FUN_000ee640();
  *in_EAX = &PTR_FUN_0039e358;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1d] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x1c] = 0xffffffff;
  *(byte *)(in_EAX + 0x1f) = *(byte *)(in_EAX + 0x1f) & 0xfc;
  *(byte *)(in_EAX + 0x20) = *(byte *)(in_EAX + 0x20) & 0xfc | 4;
  return;
}
