/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56D847E3168E9868E37BE3334DEB5B8AE977BF50E642B9E3903700F9D8403E8F
 * Entry: 0x000c4ec0, Ghidra index: 2419, label: FUN_000c4ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_000c4ec0(void)

{
  int unaff_EBX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBX + 0x638) != unaff_EDI) {
    FUN_0008f6a0();
  }
  if (*(int *)(unaff_EBX + 0x630) != 0) {
    FUN_0008f6a0(0);
  }
  if (*(int *)(unaff_EBX + 0x640) != unaff_EDI) {
    FUN_0008f6a0();
  }
  return;
}
