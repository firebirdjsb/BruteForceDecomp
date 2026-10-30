/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2502A0171D96F318E2129C38A1283B66C12FB4077A701B0CC5033C39AB29A267
 * Entry: 0x003164dd, Ghidra index: 12140, label: FUN_003164dd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003164dd(int param_1)

{
  int iVar1;
  
  FUN_003118f0();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    iVar1 = FUN_003163b2(param_1);
  }
  else {
    iVar1 = FUN_00315f72(param_1);
  }
  if (iVar1 != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  }
  FUN_00311923();
  return iVar1;
}
