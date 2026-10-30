/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83911C83CAD77A89D80B418D7CC54B879991763C6E871CC32B9974191BE35078
 * Entry: 0x00207410, Ghidra index: 7308, label: FUN_00207410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00207410(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if (*param_2 == 0x5bbc278) {
      if ((char)param_1 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x40);
      }
      cVar1 = '\x01';
    }
    if ((cVar1 == '\0') && (*param_2 == -0x12b715e6)) {
      if ((char)param_1 != '\0') {
        *param_3 = *(undefined4 *)(in_ECX + 0x44);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x44) = *param_3;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}
