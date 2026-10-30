/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20A38DF48A2664ECC043FF45DB2E01C37762ED1CBE9895F0E259A7FE0498EEDF
 * Entry: 0x001fa070, Ghidra index: 7084, label: FUN_001fa070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_001fa070(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_001f8c90(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if (*param_2 == -0x13dcfa18) {
      if ((char)param_1 == '\0') {
        *(undefined4 *)(in_ECX + 0x118) = *param_3;
      }
      else {
        *param_3 = *(undefined4 *)(in_ECX + 0x118);
      }
      cVar1 = '\x01';
    }
    if ((cVar1 == '\0') && (*param_2 == -0x11e5989)) {
      if ((char)param_1 != '\0') {
        *param_3 = *(undefined4 *)(in_ECX + 0x11c);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x11c) = *param_3;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}
