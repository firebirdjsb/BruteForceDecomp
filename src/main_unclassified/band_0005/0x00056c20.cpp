/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B31BCC9B1B3F366413526456C7CE0C9ADA41697C13F56973CC2E3DF024FF04E7
 * Entry: 0x00056c20, Ghidra index: 836, label: FUN_00056c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_00056c20(void)

{
  byte bVar1;
  int unaff_EBX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 8) != *(int *)(unaff_EBX + 8)) {
    FUN_0008f6a0(*(int *)(unaff_EBX + 8));
  }
  if (*(int *)(unaff_EDI + 0x10) != *(int *)(unaff_EBX + 0x10)) {
    FUN_0008f6a0(*(int *)(unaff_EBX + 0x10));
  }
  bVar1 = *(byte *)(unaff_EDI + 0x14) ^
          (*(byte *)(unaff_EDI + 0x14) ^ *(byte *)(unaff_EBX + 0x14)) & 1;
  *(byte *)(unaff_EDI + 0x14) = bVar1;
  bVar1 = (*(byte *)(unaff_EBX + 0x14) ^ bVar1) & 2 ^ bVar1;
  *(byte *)(unaff_EDI + 0x14) = bVar1;
  *(byte *)(unaff_EDI + 0x14) = (*(byte *)(unaff_EBX + 0x14) ^ bVar1) & 4 ^ bVar1;
  *(undefined4 *)(unaff_EDI + 0x18) = *(undefined4 *)(unaff_EBX + 0x18);
  return;
}
