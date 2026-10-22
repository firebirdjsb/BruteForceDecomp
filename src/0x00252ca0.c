/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD821A45F16297E02A74EFDE00C6112DEF3CBCBD34AB1AFA37539BD87DBAEB6C
 * Entry: 0x00252ca0, Ghidra index: 8383, label: FUN_00252ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00252ca0(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  uint *unaff_EDI;
  int local_4;
  
  piVar1 = param_1;
  *unaff_EDI = 0;
  bVar3 = 0;
  while( true ) {
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,&param_1,1,&local_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (local_4 == 0) break;
    *unaff_EDI = *unaff_EDI | ((uint)param_1 & 0x7f) << (bVar3 & 0x1f);
    bVar3 = bVar3 + 7;
    if (-1 < (char)param_1) {
      return 0;
    }
  }
  return 0;
}
