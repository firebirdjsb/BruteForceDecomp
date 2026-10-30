/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F30D8C465311747EB6458B9035FD31179BD0299FA1B719E364207E3582321E08
 * Entry: 0x002dd220, Ghidra index: 10317, label: FUN_002dd220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dd220(undefined4 param_1)

{
  int in_EAX;
  undefined4 uVar1;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 8) = in_EAX;
  uVar1 = FUN_002d5d50(unaff_ESI,
                       (float)(((float10)*(double *)(*(int *)(in_EAX + 0x14) + 0x108) -
                               (float10)*(double *)(in_EAX + 0x40)) *
                               (float10)*(float *)(in_EAX + 0x48) +
                               (float10)*(float *)(in_EAX + 0x50) + (float10)1e+20));
  *(undefined4 *)(unaff_ESI + 4) = uVar1;
  *(undefined4 *)(unaff_ESI + 0xc) = param_1;
  return;
}
