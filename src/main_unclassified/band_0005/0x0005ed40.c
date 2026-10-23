/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3322EDB05953E7F9449061CE8B18A4A44DFFF375445B00F87B87A6A22F2BB4F1
 * Entry: 0x0005ed40, Ghidra index: 998, label: FUN_0005ed40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005ed40(undefined4 param_1,undefined4 param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *(undefined4 *)(in_EAX + 8) = *in_ECX;
  *(undefined4 *)(in_EAX + 0xc) = uVar2;
  *(undefined4 *)(in_EAX + 0x10) = uVar1;
  uVar1 = in_ECX[5];
  uVar2 = in_ECX[4];
  *(undefined4 *)(in_EAX + 0x14) = in_ECX[3];
  *(undefined4 *)(in_EAX + 0x18) = uVar2;
  *(undefined4 *)(in_EAX + 0x1c) = uVar1;
  *(undefined4 *)(in_EAX + 0x20) = param_2;
  *(float *)(in_EAX + 0x24) = param_3;
  *(undefined4 *)(in_EAX + 0x2c) = param_1;
  *(float *)(in_EAX + 0x28) = 1.0 / param_3;
  return;
}
