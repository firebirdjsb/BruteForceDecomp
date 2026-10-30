/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D76E8EFC39C1934A5F6E0588319406398A6F786ECB92AA5026DF65B85047CB56
 * Entry: 0x000c5ca0, Ghidra index: 2429, label: FUN_000c5ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_000c4e70(void);
extern void FUN_000c4ec0(void);

void FUN_000c5ca0(void)

{
  int *in_EAX;
  int iVar1;
  
  in_EAX[0x1d] = -0x41b33333;
  if (in_EAX[0x28] != 0) {
    FUN_0008f6a0(0);
  }
  *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xfe;
  iVar1 = (**(code **)(*in_EAX + 0x38))();
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x4c) = *(byte *)(iVar1 + 0x4c) & 0xfe;
  }
  if (*(int *)(in_EAX[0x2a] + 0x630) != 0) {
    if (*(int *)(in_EAX[0x2a] + 0x638) != 0) {
      FUN_0008f6a0(0);
    }
    FUN_000c4e70();
    FUN_000c4ec0();
  }
  return;
}
