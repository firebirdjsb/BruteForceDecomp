/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA54891DE485DA366A338826C2C615EB29D81A82181844499B9F127616E1DAC4
 * Entry: 0x0006ab30, Ghidra index: 1209, label: FUN_0006ab30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0006ab30(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  int *in_ECX;
  
  piVar1 = (int *)(in_EAX + 4);
  if (in_ECX == (int *)0x0) {
    *piVar1 = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0xc) = 0x27f;
    *(undefined4 *)(in_EAX + 0x10) = 0x1df;
  }
  else {
    *piVar1 = *in_ECX;
    *(int *)(in_EAX + 8) = in_ECX[1];
    *(int *)(in_EAX + 0xc) = in_ECX[2];
    *(int *)(in_EAX + 0x10) = in_ECX[3];
  }
  fVar2 = (float)(*(int *)(in_EAX + 0xc) - *piVar1) * 0.5;
  *(float *)(in_EAX + 0x30) = fVar2;
  fVar3 = (float)(*(int *)(in_EAX + 0x10) - *(int *)(in_EAX + 8)) * 0.5;
  *(float *)(in_EAX + 0x34) = fVar3;
  *(float *)(in_EAX + 0x38) = fVar2 / *(float *)(in_EAX + 0x24);
  *(float *)(in_EAX + 0x3c) = -(fVar3 / *(float *)(in_EAX + 0x28));
  *(undefined4 *)(in_EAX + 0x40) = 0x3f800000;
  *(undefined4 *)(in_EAX + 0x48) = *(undefined4 *)(in_EAX + 0x24);
  *(undefined4 *)(in_EAX + 0x44) = 0;
  fVar2 = 1.0 / SQRT(*(float *)(in_EAX + 0x48) * *(float *)(in_EAX + 0x48) +
                     *(float *)(in_EAX + 0x44) * *(float *)(in_EAX + 0x44) +
                     *(float *)(in_EAX + 0x40) * *(float *)(in_EAX + 0x40));
  *(float *)(in_EAX + 0x40) = fVar2 * *(float *)(in_EAX + 0x40);
  *(float *)(in_EAX + 0x44) = fVar2 * *(float *)(in_EAX + 0x44);
  *(float *)(in_EAX + 0x48) = fVar2 * *(float *)(in_EAX + 0x48);
  *(undefined4 *)(in_EAX + 0x4c) = 0;
  *(undefined4 *)(in_EAX + 0x50) = 0x3f800000;
  *(undefined4 *)(in_EAX + 0x54) = *(undefined4 *)(in_EAX + 0x28);
  fVar2 = 1.0 / SQRT(*(float *)(in_EAX + 0x4c) * *(float *)(in_EAX + 0x4c) +
                     *(float *)(in_EAX + 0x54) * *(float *)(in_EAX + 0x54) +
                     *(float *)(in_EAX + 0x50) * *(float *)(in_EAX + 0x50));
  *(float *)(in_EAX + 0x4c) = fVar2 * *(float *)(in_EAX + 0x4c);
  *(float *)(in_EAX + 0x50) = fVar2 * *(float *)(in_EAX + 0x50);
  *(float *)(in_EAX + 0x54) = fVar2 * *(float *)(in_EAX + 0x54);
  return 0;
}
