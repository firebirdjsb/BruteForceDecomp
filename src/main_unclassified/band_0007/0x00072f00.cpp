/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A54FEC194FF0CD85B5BA0DAE439D5AB69BA07347665D7572CC6A62A50B2261DC
 * Entry: 0x00072f00, Ghidra index: 1292, label: FUN_00072f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_00072f00(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x8c) != 0) {
    if (*(int *)(unaff_EDI + 0x8c) != 0) {
      FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(0x88), UINT32_C(0));
    }
    *(undefined1 *)(unaff_EDI + 200) = 1;
  }
  return;
}
