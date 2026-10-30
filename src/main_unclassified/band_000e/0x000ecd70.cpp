/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52240B79AB688E00B8045F5CE49775E23E747BD3A7553349D9855BC8BE937635
 * Entry: 0x000ecd70, Ghidra index: 2942, label: FUN_000ecd70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ecd70(int param_1)

{
  int in_ECX;
  
  FUN_000eb560(param_1);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined1 *)(in_ECX + 0x68) = *(undefined1 *)(param_1 + 0x68);
  return;
}
