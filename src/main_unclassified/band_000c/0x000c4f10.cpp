/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07BD5136A7FCDB7665D4717BA18DC2BF9C2E71D58D998FF55E5644263B773B6F
 * Entry: 0x000c4f10, Ghidra index: 2420, label: FUN_000c4f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_000c4e70(void);
extern void FUN_000c4ec0(void);

void FUN_000c4f10(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x638) != 0) {
    FUN_0008f6a0(0);
  }
  FUN_000c4e70();
  FUN_000c4ec0();
  return;
}
