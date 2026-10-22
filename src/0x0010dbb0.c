/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF5812F5235F7E20380AC5E3C2659D2F7BC5E0C23227E20681BC977AB04F1B78
 * Entry: 0x0010dbb0, Ghidra index: 3501, label: FUN_0010dbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
char FUN_0010dbb0(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_1 & 8) == 0) {
    if ((param_1 & 0x10) == 0) {
      if ((param_1 & 0x20) == 0) {
        if ((param_1 & 0x40) == 0) {
          return '\0';
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      cVar1 = FUN_0010d7c0(uVar2);
    }
    else {
      cVar1 = FUN_0010d700(1);
    }
  }
  else {
    cVar1 = FUN_0010d700(0);
  }
  if (cVar1 != '\0') {
    param_1 = 0xebf26601;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&param_1);
  }
  return cVar1;
}
