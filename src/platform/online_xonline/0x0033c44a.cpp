/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F9CD71B7FEFD81AD28E513F0B7CDD1BC75581CAD2AD91A1C6E39D0629DDCCDA
 * Entry: 0x0033c44a, Ghidra index: 12550, label: FUN_0033c44a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; Xbox guest ABI_UNVERIFIED. */
extern void FUN_0033bc06(uint param_1);
void FUN_0033c44a(int param_1,int param_2)

{
  int in_ECX;
  
  *(undefined1 *)(*(int *)(param_2 + 0x10) * 0x200 + *(int *)(param_2 + 0x14) + param_1) =
       *(undefined1 *)(in_ECX + 0x83c);
  FUN_0033bc06(1);
  return;
}
