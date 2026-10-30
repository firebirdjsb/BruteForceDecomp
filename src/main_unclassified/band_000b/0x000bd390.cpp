/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC30BEF155B9E0F4DFCBBB25E0C67DFB7D78F3B4C57759A2853F6EF1E32E637C
 * Entry: 0x000bd390, Ghidra index: 2308, label: FUN_000bd390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);

void FUN_000bd390(int param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x68) != in_EAX) {
      FUN_0008f6a0();
    }
    if (*(int *)(iVar1 + 0x70) != in_EAX) {
      FUN_0008f6a0();
    }
  }
  if (*(int *)(param_1 + 0x68) != *(int *)(in_EAX + 0x5e4)) {
    FUN_0008f6a0(*(int *)(in_EAX + 0x5e4));
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x68)) {
      FUN_0008f6a0(*(int *)(param_1 + 0x68));
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_0008f6a0(0);
    }
  }
  return;
}
