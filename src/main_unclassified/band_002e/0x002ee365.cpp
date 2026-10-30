/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10A53C6D2C7A4B1EB2BF0213EC7CBEF4B63BAC4D7D97799377DCCDE1906854B8
 * Entry: 0x002ee365, Ghidra index: 10694, label: FUN_002ee365
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002ee365(ushort *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 == (ushort *)0x0) {
    pcVar1 = param_2 + 1;
    do {
      cVar2 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar2 != '\0');
    uVar3 = (int)param_2 - (int)pcVar1;
  }
  else if ((param_3 != 0) && (param_3 != 0)) {
    do {
      *param_1 = (ushort)(byte)param_2[uVar3];
      if (param_2[uVar3] == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 1;
    } while (uVar3 < param_3);
  }
  return uVar3;
}
