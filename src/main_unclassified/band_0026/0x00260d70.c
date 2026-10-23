/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF7E18F387CD699FC81C77B102976C399D7270F53FDF535181C65B3EDF25B169
 * Entry: 0x00260d70, Ghidra index: 8630, label: FUN_00260d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b258;
int FUN_00260d70(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_retaddr;
  
  RtlEnterCriticalSection(&DAT_0046b258);
  if (*(undefined4 **)(unaff_retaddr + 0xc) == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)**(undefined4 **)(unaff_retaddr + 0xc);
  }
  while( true ) {
    if (puVar2 == *(undefined4 **)(unaff_retaddr + 0xc)) {
      RtlLeaveCriticalSection(&DAT_0046b258);
      return 0;
    }
    iVar1 = puVar2[2];
    if ((*(int *)(iVar1 + 0x14) != 0) &&
       (param_1 < (uint)((*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14)) / 0x18))) break;
    if (*(int *)(iVar1 + 0x14) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14)) / 0x18;
    }
    puVar2 = (undefined4 *)*puVar2;
    param_1 = param_1 - iVar1;
  }
  iVar1 = *(int *)(puVar2[2] + 0x14);
  RtlLeaveCriticalSection(&DAT_0046b258);
  return iVar1 + param_1 * 0x18;
}
