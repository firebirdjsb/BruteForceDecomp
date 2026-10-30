/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03680F21249A0054D1E3AFA606D26D81EE45994371CCEA45EA490D9B347D0D3A
 * Entry: 0x002fe21a, Ghidra index: 11014, label: ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
   
   Library: Visual Studio 2003 Release */

void __JumpToContinuation__YGXPAXPAUEHRegistrationNode___Z(code *UNRECOVERED_JUMPTABLE)

{
  undefined4 *unaff_FS_OFFSET;
  
  *unaff_FS_OFFSET = *(undefined4 *)*unaff_FS_OFFSET;
                    /* WARNING: Could not recover jumptable at 0x002fe243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
