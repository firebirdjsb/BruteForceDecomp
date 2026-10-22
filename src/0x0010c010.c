/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9565E5781B60D64C7E8DB3271DF1ED9C961052D7F978A293CFBE640ED003BAB3
 * Entry: 0x0010c010, Ghidra index: 3458, label: FUN_0010c010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010c010(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_0010c180(param_1 + 4,iVar1,*(undefined4 *)(iVar1 + 4),param_2);
  FUN_00222790();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *(float *)(param_1 + 0x14) =
       *(float *)(param_2 + 8) + *(float *)(param_2 + 4) + *(float *)(param_1 + 0x14);
  return;
}
