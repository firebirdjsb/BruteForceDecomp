/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FEF7225EB61A66EBCC21BA30DE510123C756AD46D835961C0D41015ED106118
 * Entry: 0x00179cf0, Ghidra index: 4994, label: FUN_00179cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00179cf0(void)

{
  float fVar1;
  int in_ECX;
  int in_EDX;
  
  if (*(char *)(in_EDX + 0x4c) != '\0') {
    fVar1 = *(float *)(in_EDX + 0x48) * 0.5;
    if (*(char *)(in_ECX + 0x4c) != '\0') {
      fVar1 = *(float *)(in_ECX + 0x48) * 0.5 + fVar1;
    }
    *(undefined1 *)(in_ECX + 0x4c) = 1;
    *(float *)(in_ECX + 0x48) = fVar1;
  }
  if (*(char *)(in_ECX + 0x54) == '\0') {
    *(undefined1 *)(in_ECX + 0x54) = 1;
    *(undefined4 *)(in_ECX + 0x50) = 0x3f800000;
  }
  if (*(char *)(in_EDX + 0x54) != '\0') {
    fVar1 = *(float *)(in_EDX + 0x50);
    *(undefined1 *)(in_ECX + 0x54) = 1;
    *(float *)(in_ECX + 0x50) = *(float *)(in_ECX + 0x50) * 0.5 + fVar1 * 0.5;
  }
  return;
}
