/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCD8D264754AA19742D97D24EF33B1251108E64026A3B0CC6CE21FA9A12035E2
 * Entry: 0x000c88c0, Ghidra index: 2474, label: FUN_000c88c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c88c0(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  if (((*(byte *)(in_EAX + 0x70) & 1) == 0) &&
     (((*(int *)(in_EAX + 0x59c) == 0 || (iVar1 = FUN_0005be70(), iVar1 == 0)) ||
      (in_EAX == *(int *)(in_ECX + 0x68))))) {
    if (*(int *)(in_ECX + 0x70) != in_EAX) {
      FUN_0008f6a0();
    }
    *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x7c);
    if (*(int *)(in_ECX + 0x84) != 0) {
      FUN_000c9440(*(int *)(in_ECX + 0x84),in_EAX);
    }
  }
  return;
}
