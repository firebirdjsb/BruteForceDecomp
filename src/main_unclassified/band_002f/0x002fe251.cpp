/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92C5B459BFDB9F4E0445D432D797AA959683E30890D298BFAB8D80F3C66B358E
 * Entry: 0x002fe251, Ghidra index: 11016, label: ?_UnwindNestedFrames@@YGXPAUEHRegistrationNode@@PAUEHExceptionRecord@@@Z
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    ?_UnwindNestedFrames@@YGXPAUEHRegistrationNode@@PAUEHExceptionRecord@@@Z
   
   Library: Visual Studio 2003 Release */

void __UnwindNestedFrames__YGXPAUEHRegistrationNode__PAUEHExceptionRecord___Z
               (undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  
  puVar1 = (undefined4 *)*unaff_FS_OFFSET;
  RtlUnwind(param_1,0x2fe27a,param_2,0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *puVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = puVar1;
  return;
}
