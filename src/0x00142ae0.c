/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09FE9211DF2839705FEE95F64074746278EC0E205348479749D5AD66BA21FCED
 * Entry: 0x00142ae0, Ghidra index: 4130, label: FUN_00142ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00142ae0(undefined4 param_1,undefined1 param_2)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_ECX;
  unaff_ESI[2] = param_1;
  unaff_ESI[1] = in_EDX;
  unaff_ESI[3] = *in_EAX;
  FUN_00142140(unaff_ESI + 4);
  *(undefined1 *)(unaff_ESI + 7) = param_2;
  *(undefined1 *)((int)unaff_ESI + 0x1d) = 0;
  return;
}
