/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63C8B605B3F6DBB304C0A2B4AA0E6F929D4F9C06FA8AB33A071BCCDF3E6DF9C9
 * Entry: 0x002a57c0, Ghidra index: 9570, label: FUN_002a57c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002a57c0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (iVar1 != 0) {
    FUN_002a5760(iVar1);
  }
  return 0;
}
