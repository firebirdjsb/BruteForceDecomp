/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A0F424E64B1DA41E2D39A0D461148959EEF6887DBE3B333E9399FED1D9BA9FD
 * Entry: 0x00170f00, Ghidra index: 4841, label: FUN_00170f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00170f00(void)

{
  int in_EAX;
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    if ((*(int *)(in_EAX + 8) - iVar1) / 0x14 != 0) {
      iVar1 = *(int *)(*(int *)(in_EAX + 8) + -4) - *(int *)(iVar1 + 0x10);
      fVar2 = (float10)iVar1;
      if (iVar1 < 0) {
        fVar2 = fVar2 + (float10)4.2949673e+09;
      }
      return fVar2;
    }
  }
  return (float10)0.0;
}
