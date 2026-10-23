/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDACE37FE553313179C66C5B5A711918B9C1F90A52A40F7536B9EEBF196B3AB8
 * Entry: 0x000eda10, Ghidra index: 2951, label: FUN_000eda10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000eda10(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_000ecdc0(param_1,param_2,param_3);
  if ((cVar1 == '\0') && (*param_2 == 0x1f606d9e)) {
    if ((char)param_1 != '\0') {
      *param_3 = *(undefined4 *)(in_ECX + 0x38);
      return '\x01';
    }
    *(undefined4 *)(in_ECX + 0x38) = *param_3;
    cVar1 = '\x01';
  }
  return cVar1;
}
