/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D24AA5E9D55E6EF8BD11B09FFC2412F64C644FB5EFF64D9904F9E2DDF426D6B5
 * Entry: 0x00081550, Ghidra index: 1524, label: FUN_00081550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00081550(void)

{
  int iVar1;
  float fVar2;
  undefined4 *in_EAX;
  int iVar3;
  int in_ECX;
  int *unaff_ESI;
  
  *(undefined4 *)(in_ECX + 0xc) = *in_EAX;
  iVar3 = FUN_000782c0(4);
  if (iVar3 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 8);
  if (iVar1 == 1) {
    fVar2 = (float)*unaff_ESI;
    if (*unaff_ESI < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(iVar3 + 4) = fVar2;
  }
  else {
    if (iVar1 == 2) {
      *(int *)(iVar3 + 4) = *unaff_ESI;
      return 1;
    }
    if (iVar1 == 3) {
      *(bool *)(iVar3 + 4) = *unaff_ESI != 0;
      return 1;
    }
  }
  return 1;
}
