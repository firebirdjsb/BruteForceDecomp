/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 922DEE9D7E4A7F6CA97722A20360B0ACA035E471A2A9B2073F53C354A0072A03
 * Entry: 0x00171710, Ghidra index: 4856, label: FUN_00171710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00171710(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x49c) = *in_EAX;
    *(undefined4 *)(in_ECX + 0x4a0) = in_EAX[1];
    *(undefined4 *)(in_ECX + 0x4a4) = in_EAX[2];
    return;
  }
  *(undefined4 *)(in_ECX + 0x49c) = 0;
  *(undefined4 *)(in_ECX + 0x4a0) = 0;
  *(undefined4 *)(in_ECX + 0x4a4) = 0;
  return;
}
