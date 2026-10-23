/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A06B67AF53AE566AD4963DCCEBE829EAC65158AF5CB41C316DABB353BE56D09
 * Entry: 0x0009b730, Ghidra index: 1862, label: FUN_0009b730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0009b730(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined1 *)(in_EAX + 0x9c) = 0;
  *(undefined1 *)(in_EAX + 0xc2) = 0;
  if ((in_ECX != 0) && (*(int *)(in_ECX + 4) == 0xd898225)) {
    *(undefined1 *)(in_EAX + 0xc2) = 1;
  }
  return 0;
}
