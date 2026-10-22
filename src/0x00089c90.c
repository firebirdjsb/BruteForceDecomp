/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E07EF4E20EB961B12DBF41BF2795CFF6EBC0963942C69B632D385BD063C88B0D
 * Entry: 0x00089c90, Ghidra index: 1646, label: FUN_00089c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00089c90(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  
  *(byte *)(in_ECX + 9) = *(byte *)(in_ECX + 9) & 0xf7;
  cVar1 = FUN_00089d30(in_ECX,param_1);
  if (cVar1 != '\0') {
    *(byte *)(in_ECX + 9) = *(byte *)(in_ECX + 9) | 2;
    (**(code **)(*in_ECX + 0x14))();
  }
  if ((*(byte *)(in_ECX + 9) & 4) != 0) {
    cVar1 = FUN_00089da0(param_1);
    *(byte *)(in_ECX + 9) = *(byte *)(in_ECX + 9) ^ (cVar1 << 2 ^ *(byte *)(in_ECX + 9)) & 4;
  }
  return;
}
