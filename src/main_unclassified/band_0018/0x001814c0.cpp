/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80B6D850F7092B23C2765D04F68742A79A35CB94F30C6D55DFB05F38A3528183
 * Entry: 0x001814c0, Ghidra index: 5154, label: FUN_001814c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined2 FUN_001814c0(void)

{
  int in_ECX;
  undefined2 uVar1;
  
  if (*(char *)(in_ECX + 0xc) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (*(float *)(in_ECX + 8) <= *(float *)(in_ECX + 4)) {
      *(undefined1 *)(in_ECX + 0xc) = 0;
      return 0;
    }
  }
  return uVar1;
}
