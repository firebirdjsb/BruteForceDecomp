/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CEAF804CA9017AA7C4550226A02E0025857091A3F6CD17A98A400826FF92AA22
 * Entry: 0x0006ad00, Ghidra index: 1211, label: FUN_0006ad00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006ad00(void)

{
  float fVar1;
  int in_EAX;
  float10 fVar2;
  
  fVar2 = (float10)fpatan((float10)*(float *)(in_EAX + 0x24),(float10)1);
  *(float *)(in_EAX + 0x14) = (float)(fVar2 * (float10)57.29577791868205);
  *(undefined4 *)(in_EAX + 0x40) = 0x3f800000;
  *(undefined4 *)(in_EAX + 0x44) = 0;
  *(undefined4 *)(in_EAX + 0x48) = *(undefined4 *)(in_EAX + 0x24);
  fVar1 = 1.0 / SQRT(*(float *)(in_EAX + 0x48) * *(float *)(in_EAX + 0x48) +
                     *(float *)(in_EAX + 0x44) * *(float *)(in_EAX + 0x44) +
                     *(float *)(in_EAX + 0x40) * *(float *)(in_EAX + 0x40));
  *(float *)(in_EAX + 0x40) = fVar1 * *(float *)(in_EAX + 0x40);
  *(float *)(in_EAX + 0x44) = fVar1 * *(float *)(in_EAX + 0x44);
  *(float *)(in_EAX + 0x48) = fVar1 * *(float *)(in_EAX + 0x48);
  *(float *)(in_EAX + 0x38) = *(float *)(in_EAX + 0x30) / *(float *)(in_EAX + 0x24);
  return;
}
