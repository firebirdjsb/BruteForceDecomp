/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EC0AED754EA136AFEAAB69CE68D8FB24B859B836EF76550C679249F95764B44
 * Entry: 0x00077400, Ghidra index: 1397, label: FUN_00077400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00077860(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);

int FUN_00077400(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00077860();
  return unaff_ESI * 0x10 + unaff_EDI;
}
