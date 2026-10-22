/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3C1F95AE428C7391E4FDBD3A91914A346E389AD04B173BA7BCD7A5D01997551
 * Entry: 0x000425b0, Ghidra index: 506, label: FUN_000425b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000425b0(void)

{
  int in_EAX;
  int *unaff_ESI;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  if ((unaff_ESI != (int *)0x0) && (in_EAX != 0)) {
    local_4 = *(float *)(in_EAX + 0x1c) + 0.0;
    local_8 = *(float *)(in_EAX + 0x18) + 0.25;
    local_c = *(undefined4 *)(in_EAX + 0x14);
    (**(code **)(*unaff_ESI + 0x48))(&local_c);
    FUN_0004c5e0();
  }
  return;
}
