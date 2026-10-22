/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 735FAB54CD063B333583D2114BBEBDCD23FFFCF9C740826B0894554ABEB84D0D
 * Entry: 0x00207d80, Ghidra index: 7311, label: FUN_00207d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00207d80(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if ((cVar1 == '\0') && (*param_2 == 0x14b0089f)) {
    if ((char)param_1 != '\0') {
      FUN_0001f4f0(in_ECX + 0x40,0,0xffffffff);
      return '\x01';
    }
    FUN_0001f4f0(param_3,0,0xffffffff);
    cVar1 = '\x01';
  }
  return cVar1;
}
