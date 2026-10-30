/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4256C8A6108BF6ED8D37A0C73B8E587437068A9CC824EC086EFC6AB6D8E59ADD
 * Entry: 0x00381466, Ghidra index: 13563, label: FUN_00381466
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00381466(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = param_1 + 1;
  if ((*(char *)*puVar1 == '\x01') && ((((char *)*puVar1)[4] & 0x7fU) == 1)) {
    if (param_2 == 1) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
    else {
      *puVar1 = *param_1;
      FUN_00381304(puVar1,param_2 + -1);
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x14) = 0x20;
  }
  return;
}
