/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 667E6A5A3BF4AD133CD5AE4721757000628535519CC6B1B1D05BD49DF5BF19C4
 * Entry: 0x001035f0, Ghidra index: 3300, label: FUN_001035f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001035f0(void)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  int iVar3;
  float *unaff_ESI;
  int *piVar4;
  
  fVar2 = *(float *)(in_EAX + 0x80);
  fVar1 = *(float *)(in_EAX + 0x84);
  if (*(int *)(in_EAX + 0x60) == -0x10c8bda6) {
    piVar4 = *(int **)(in_EAX + 0x7c);
    if (piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 0x14))(piVar4);
      iVar3 = (**(code **)(**(int **)(in_EAX + 0x7c) + 0x18))
                        (*(int **)(in_EAX + 0x7c),piVar4,(float)iVar3);
      fVar1 = (float)iVar3;
    }
    unaff_ESI[3] = fVar2;
  }
  else {
    if (*(int *)(in_EAX + 0x60) == 0x10e241aa) {
      unaff_ESI[2] = (*(float *)(in_EAX + 0x14) - fVar2) * 0.5;
      *unaff_ESI = (*(float *)(in_EAX + 0x18) - fVar1) * 0.5;
      unaff_ESI[3] = fVar2 + unaff_ESI[2];
      unaff_ESI[1] = fVar1 + *unaff_ESI;
      return;
    }
    unaff_ESI[3] = fVar2;
  }
  unaff_ESI[1] = fVar1;
  unaff_ESI[2] = 0.0;
  *unaff_ESI = 0.0;
  return;
}
