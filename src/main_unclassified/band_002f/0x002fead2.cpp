/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57DDD022EFF7DE2A324D900052DF3D8FAF435D226A507986AD49FB350EAFF362
 * Entry: 0x002fead2, Ghidra index: 11043, label: ___DestructExceptionObject
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2003 Release */

void ___DestructExceptionObject(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4), iVar1 != 0)) {
    FID_conflict___CallMemberFunction1__YGXPAX00_Z(*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  return;
}
