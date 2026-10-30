/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CE172A175597FA94E3471F05AF3740B0039EF97C861C7F6612B9E2C0A2C8CE8
 * Entry: 0x0017a210, Ghidra index: 5002, label: FUN_0017a210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017a210(void)

{
  float *in_ECX;
  float *in_EDX;
  
  if ((*in_EDX == *in_ECX) && (*(char *)(in_EDX + 1) == *(char *)(in_ECX + 1))) {
    return 1;
  }
  return 0;
}
