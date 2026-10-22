/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E91865A0CECEFC7E819FEBDEB4D126B028867F7C05C9C794C0691C3D1C45CFC
 * Entry: 0x00256880, Ghidra index: 8443, label: FUN_00256880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfbc;
extern uint32_t DAT_0046cfc0;
undefined4 FUN_00256880(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    if ((DAT_0046cfbc != iVar2) && (DAT_0046cfc0 != iVar2)) {
      FUN_00256900(iVar2);
    }
  }
  return 0;
}
