/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBCD8ACBB1F0BA6BDC558FB19827F7675763092EE8DD918EF50C53693BD13BD8
 * Entry: 0x000c9610, Ghidra index: 2488, label: FUN_000c9610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c9610(int param_1)

{
  *(short *)(param_1 + 4) = (short)(int)((float)(int)*(short *)(param_1 + 0xe) * -0.5);
  *(short *)(param_1 + 6) = (short)(int)((float)(int)*(short *)(param_1 + 0xc) * -0.5);
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
    return;
  }
  /* Original XBE 0x000C967E-0x000C9686: xor eax,eax; mov edx,[eax+0x2c];
   * lea ecx,[eax+0x2c]; call [edx+0x10]. This is an original guest32
   * absolute access, NOT a valid host pointer or a resolved ECX ABI. */
  (**(code **)(*(uint32_t *)(uintptr_t)UINT32_C(0x0000002c) + 0x10))();
  return;
}
