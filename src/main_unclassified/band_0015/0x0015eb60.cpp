/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9943E5FE0266E832D6D827ED4A808568E55461E8C33905D6181555E20FCFA48
 * Entry: 0x0015eb60, Ghidra index: 4560, label: FUN_0015eb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015eb60(void)

{
  undefined1 *in_EAX;
  undefined1 *in_ECX;
  
  if (in_EAX != (undefined1 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_ECX + 8);
    *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(in_ECX + 0xc);
    *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(in_ECX + 0x10);
    *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(in_ECX + 0x14);
    *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  }
  return;
}
