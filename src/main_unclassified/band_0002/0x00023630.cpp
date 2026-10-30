/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42BD9333FD4D5919E454A0229B22F7C0A0A2E6B91151A79634099E3170729144
 * Entry: 0x00023630, Ghidra index: 228, label: FUN_00023630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined2 FUN_00023630(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  int *in_EDX;
  float *unaff_ESI;
  
  iVar1 = *in_EDX;
  uVar4 = 1;
  if ((iVar1 != 0) && ((*(byte *)(in_EDX + 0xc) & 2) != 0)) {
    if ((float)in_EDX[0xb] * 0.5 + *(float *)(iVar1 + 0x18) <= unaff_ESI[1]) {
      return 0;
    }
    if (*(float *)(iVar1 + 0x18) - (float)in_EDX[0xb] * 0.5 < unaff_ESI[1]) {
      fVar2 = unaff_ESI[2] - *(float *)(iVar1 + 0x1c);
      fVar3 = *unaff_ESI - *(float *)(iVar1 + 0x14);
      if (fVar3 * fVar3 + fVar2 * fVar2 + 0.0 <= (float)in_EDX[10] * (float)in_EDX[10]) {
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}
