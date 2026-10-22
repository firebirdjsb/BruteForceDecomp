/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 676D72C6A0EE88D3504DDEAC155CCB294288B1C4F2EA9609015268672DB2D3F8
 * Entry: 0x0033df31, Ghidra index: 12602, label: FUN_0033df31
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033df31(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_2 != 0) &&
     (iVar1 = FUN_002eb322(param_1,param_2,param_3,&stack0x00000010), iVar1 != param_2)) {
    return iVar1;
  }
  return -1;
}
