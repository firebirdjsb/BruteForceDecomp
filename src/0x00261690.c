/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5777A1AD4882ACBFF397147A1BDA78669556A066CA0F6C667BBBF1B8C45104D7
 * Entry: 0x00261690, Ghidra index: 8640, label: FUN_00261690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00261690(undefined4 param_1,int param_2,undefined4 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return -1;
  }
  if (param_4 != (char *)0x0) {
    cVar2 = FUN_00288780();
    if (cVar2 != '\0') {
      pcVar1 = param_4 + 1;
      do {
        cVar2 = *param_4;
        param_4 = param_4 + 1;
      } while (cVar2 != '\0');
      return (int)param_4 - (int)pcVar1;
    }
    return -1;
  }
  iVar3 = FUN_00288810();
  return iVar3;
}
