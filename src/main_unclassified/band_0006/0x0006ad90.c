/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C9AC21DE2CE68F974004ACFEE2CAF6BD944AF19ACC47F3D72F7A198263CE611
 * Entry: 0x0006ad90, Ghidra index: 1212, label: FUN_0006ad90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006ad90(void)

{
  float fVar1;
  int in_EAX;
  float10 fVar2;
  
  fVar2 = (float10)fpatan((float10)*(float *)(in_EAX + 0x28),(float10)1);
  *(float *)(in_EAX + 0x18) = (float)(fVar2 * (float10)57.29577791868205);
  *(undefined4 *)(in_EAX + 0x4c) = 0;
  *(undefined4 *)(in_EAX + 0x50) = 0x3f800000;
  *(undefined4 *)(in_EAX + 0x54) = *(undefined4 *)(in_EAX + 0x28);
  fVar1 = 1.0 / SQRT(*(float *)(in_EAX + 0x54) * *(float *)(in_EAX + 0x54) +
                     *(float *)(in_EAX + 0x50) * *(float *)(in_EAX + 0x50) +
                     *(float *)(in_EAX + 0x4c) * *(float *)(in_EAX + 0x4c));
  *(float *)(in_EAX + 0x4c) = fVar1 * *(float *)(in_EAX + 0x4c);
  *(float *)(in_EAX + 0x50) = fVar1 * *(float *)(in_EAX + 0x50);
  *(float *)(in_EAX + 0x54) = fVar1 * *(float *)(in_EAX + 0x54);
  *(float *)(in_EAX + 0x3c) = -(*(float *)(in_EAX + 0x34) / *(float *)(in_EAX + 0x28));
  return;
}
