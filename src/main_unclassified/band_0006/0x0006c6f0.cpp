/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B262F97FD7644C4267D60E72DE53A5623C9AA84EA2B4B3BEAAC1B43CB6FED053
 * Entry: 0x0006c6f0, Ghidra index: 1227, label: FUN_0006c6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_0006a9f0(void);
extern float10 FUN_0006aa40(void);

float10 FUN_0006c6f0(void)

{
  int in_EAX;
  float10 fVar1;
  float10 fVar2;
  
  if ((*(byte *)(in_EAX + 0x4c) & 1) != 0) {
    fVar1 = (float10)FUN_0006a9f0();
    fVar2 = (float10)FUN_0006aa40();
    return (float10)(float)fVar1 / fVar2;
  }
  return (float10)1.0;
}
