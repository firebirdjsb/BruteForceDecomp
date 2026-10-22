/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F83C5BC6A40625AC0702A6428FA798EC5282C9A8C0F81BE1609D0103C5AB9C6
 * Entry: 0x0031672b, Ghidra index: 12148, label: FUN_0031672b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0031672b(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((*(int **)(in_ECX + 0xb0) != (int *)(in_ECX + 0xb0)) ||
     (uVar1 = 0, *(int *)(in_ECX + 0x19c) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
