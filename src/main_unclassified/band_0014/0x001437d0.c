/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9956E801AD893DA0377B17858150DF939F70AD920F0A1A268A632D4487775A1E
 * Entry: 0x001437d0, Ghidra index: 4143, label: FUN_001437d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001437d0(float param_1,char param_2)

{
  float fVar1;
  int in_EAX;
  
  *(float *)(in_EAX + 0x40) = param_1 + *(float *)(in_EAX + 0x40);
  if (*(char *)(in_EAX + 0x54) != '\0') {
    fVar1 = *(float *)(in_EAX + 0x50) - param_1;
    *(float *)(in_EAX + 0x50) = fVar1;
    if (!isnan(fVar1) && fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined1 *)(in_EAX + 0x54) = 0;
    }
  }
  if (param_2 == '\0') {
    FUN_001439b0(in_EAX,param_1);
    FUN_00143d10(param_1);
  }
  return;
}
