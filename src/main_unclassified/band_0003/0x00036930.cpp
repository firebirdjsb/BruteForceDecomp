/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E55A4FE74FB4A57777A64F0D2D5C33841F7A943848941A27193275A8192F0DD
 * Entry: 0x00036930, Ghidra index: 360, label: FUN_00036930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00055390(void);

undefined4 FUN_00036930(void)

{
  int in_ECX;
  
  if (*(char *)(*(int *)(in_ECX + 0x754) + 0xd) != '\0') {
    FUN_00055390();
  }
  *(undefined1 *)(*(int *)(in_ECX + 0x754) + 0xc) = 0;
  return 1;
}
