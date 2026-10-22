/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D037107866B9248A353750659A8153F19DB6912C964DA63852E3E5F0D2D4067D
 * Entry: 0x00077e80, Ghidra index: 1416, label: FUN_00077e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00077e80(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 == 1) {
    return (float10)*(float *)(in_ECX + 4);
  }
  if (iVar1 == 2) {
    return (float10)*(int *)(in_ECX + 4);
  }
  if (iVar1 != 3) {
    return (float10)0.0;
  }
  if (*(char *)(in_ECX + 4) != '\0') {
    return (float10)1.0;
  }
  return (float10)0.0;
}
