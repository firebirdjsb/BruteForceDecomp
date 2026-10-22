/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCBF196D9AACC84670C54B300822F455A21100F68E6B748F305D03175DF37B65
 * Entry: 0x002fe24a, Ghidra index: 11015, label: FID_conflict:?_CallMemberFunction1@@YGXPAX00@Z
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Multiple Matches With Different Base Names
    ?_CallMemberFunction1@@YGXPAX00@Z
    ?_CallMemberFunction2@@YGXPAX00H@Z
   
   Library: Visual Studio 2003 Release */

void FID_conflict___CallMemberFunction1__YGXPAX00_Z(undefined4 param_1,code *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x002fe24f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
