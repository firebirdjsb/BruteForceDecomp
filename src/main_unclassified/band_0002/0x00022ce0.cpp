/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E1D6827BB892E8D2E674F4EF2840E089FA5AA0A74DEC784C6661444420775A9
 * Entry: 0x00022ce0, Ghidra index: 203, label: FUN_00022ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_00022ce0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_EAX + 0xc);
  uVar2 = *(undefined4 *)(in_EAX + 8);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_EAX + 4);
  *(undefined4 *)(in_ECX + 8) = uVar2;
  *(undefined4 *)(in_ECX + 0xc) = uVar1;
  if (*(int *)(in_ECX + 0x14) != *(int *)(in_EAX + 0x14)) {
    FUN_0008f6a0(*(int *)(in_EAX + 0x14));
  }
  return;
}
