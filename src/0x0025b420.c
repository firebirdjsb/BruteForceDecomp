/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D8467117F683272D0EE028E668F32F6E2C70262E9ABC6B503CFBFE8E190F879
 * Entry: 0x0025b420, Ghidra index: 8539, label: FUN_0025b420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0025b420(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    *(bool *)(param_1 + 0x28) = param_2 == '\0';
    FUN_00358ff0(iVar1,param_2);
  }
  return iVar1 != 0;
}
