/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D7D5D3EF34D31B340422D66094E02620874CF64C19B080D033EE22F370DE05D
 * Entry: 0x002a4250, Ghidra index: 9545, label: FUN_002a4250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a4250(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int *in_ECX;
  undefined4 in_EDX;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 8) = in_EDX;
  uVar1 = in_EAX[2];
  uVar2 = in_EAX[1];
  *(undefined4 *)(unaff_ESI + 0xc) = *in_EAX;
  *(undefined4 *)(unaff_ESI + 0x10) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x14) = uVar1;
  uVar1 = in_EAX[5];
  uVar2 = in_EAX[4];
  *(undefined4 *)(unaff_ESI + 0x18) = in_EAX[3];
  *(undefined4 *)(unaff_ESI + 0x1c) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x20) = uVar1;
  *(undefined4 *)(unaff_ESI + 0x24) = param_1;
  *(undefined4 *)(unaff_ESI + 0x28) = param_2;
  *(int **)(unaff_ESI + 0x6c) = in_ECX;
  if (in_ECX != (int *)0x0) {
    (**(code **)(*in_ECX + 4))();
  }
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  *(float *)(unaff_ESI + 0x2c) = 1.0 / *(float *)(unaff_ESI + 0x28);
  return;
}
