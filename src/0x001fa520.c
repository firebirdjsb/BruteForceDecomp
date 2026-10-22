/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE27EB0409175E7356338B586CF5D00B66F8304987F393F7062B542F12603963
 * Entry: 0x001fa520, Ghidra index: 7087, label: FUN_001fa520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_001fa520(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_001f8c90(param_1,param_2,param_3);
  if ((cVar1 == '\0') && (*param_2 == 0x1d05c4b2)) {
    if ((char)param_1 != '\0') {
      *param_3 = *(undefined4 *)(in_ECX + 0x118);
      return '\x01';
    }
    *(undefined4 *)(in_ECX + 0x118) = *param_3;
    cVar1 = '\x01';
  }
  return cVar1;
}
