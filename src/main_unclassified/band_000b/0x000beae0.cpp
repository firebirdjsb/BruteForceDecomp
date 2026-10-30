/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 467C00416FFFD477F0637D475B41F830F4604963F4B047FCB654917302AFC4CB
 * Entry: 0x000beae0, Ghidra index: 2324, label: FUN_000beae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_000beae0(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 8) != *(int *)(unaff_EDI + 0x10)) {
    FUN_0008f6a0(*(int *)(unaff_EDI + 0x10));
  }
  if ((*(byte *)(unaff_EDI + 0x4c) & 1) == 0) {
    if (*(int *)(unaff_EDI + 0x10) != 0) {
      FUN_0008f6a0(0);
    }
  }
  else if (*(int *)(unaff_EDI + 0x10) == 0) {
    *(byte *)(unaff_EDI + 0x4c) = *(byte *)(unaff_EDI + 0x4c) & 0xfe;
  }
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  *(undefined4 *)(unaff_EDI + 0x40) = 0;
  *(undefined4 *)(unaff_EDI + 0x44) = 0;
  *(undefined4 *)(unaff_EDI + 0x28) = *(undefined4 *)(unaff_EDI + 0x48);
  return;
}
