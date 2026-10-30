/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F33B3257191526B3434B2DC593D3F47551747EAC34FCD1B1A9700342B1A5101
 * Entry: 0x00051870, Ghidra index: 749, label: FUN_00051870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000519a0(void);

void FUN_00051870(void)

{
  int in_EAX;
  int unaff_EBX;
  
  for (; in_EAX != unaff_EBX; in_EAX = in_EAX + 0xc) {
    FUN_000519a0();
  }
  return;
}
