/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48A6DFB0871AEB0A0B8CDA5D3E1255C9E438D3172A48FA5BC3F476BDAE6E540C
 * Entry: 0x0035ad70, Ghidra index: 13188, label: FUN_0035ad70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0035ad70(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 4) != 0)) {
    iVar1 = XAPILIB__WaitForSingleObject(*(int *)(param_2 + 4),0);
    return iVar1 == 0;
  }
  return true;
}
