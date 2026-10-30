/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEA1F699769D66050C0FAB031E64DBE8458906F8B1C7F5472D91D06FE4334876
 * Entry: 0x00022e50, Ghidra index: 208, label: FUN_00022e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_00022e50(void)

{
  int unaff_EBX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x58) != unaff_EBX) {
    /* XBE 0x00022E50 ESI=EDI+0x54 and PUSH EBX; host guest-register model only, ABI_UNVERIFIED. */
    FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EDI) + UINT32_C(0x54), static_cast<std::uint32_t>(unaff_EBX));
  }
  *(uint *)(unaff_EDI + 0x88) =
       *(uint *)(unaff_EDI + 0x88) ^
       ((uint)(unaff_EBX != 0) << 0xb ^ *(uint *)(unaff_EDI + 0x88)) & 0x800;
  return;
}
