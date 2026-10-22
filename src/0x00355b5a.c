/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD00C8C448AD8B372C9D6FB328D135625C3E83C802480511D4B10273B4A9A4EA
 * Entry: 0x00355b5a, Ghidra index: 13128, label: FUN_00355b5a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00355b5a(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 2) & 4) == 0) {
    KeInsertQueueDpc(in_ECX + 0x278,0,0);
  }
  return;
}
