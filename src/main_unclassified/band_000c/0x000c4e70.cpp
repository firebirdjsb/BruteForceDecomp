/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2017FCCB50819E3F413A0CA66F601ADC3C3C279E67FCDF953C30CC98B27F91CA
 * Entry: 0x000c4e70, Ghidra index: 2418, label: FUN_000c4e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_000c4e70(void)

{
  int unaff_EBX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBX + 0x638) != unaff_EDI) {
    FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + 0x634U, static_cast<std::uint32_t>(unaff_EDI));
  }
  if (*(int *)(unaff_EBX + 0x640) != 0) {
    FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + 0x63cU, 0U);
  }
  if (*(int *)(unaff_EBX + 0x630) != unaff_EDI) {
    FUN_0008f6a0(static_cast<std::uint32_t>(unaff_EBX) + 0x62cU, static_cast<std::uint32_t>(unaff_EDI));
  }
  return;
}
