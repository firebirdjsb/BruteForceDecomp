/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77B9370188C6A6258DB483EECC64AD143AFB3045AEC33E25052360EA674E8FE4
 * Entry: 0x0007e0a0, Ghidra index: 1494, label: FUN_0007e0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040dd48;
undefined1 FUN_0007e0a0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  undefined1 uVar2;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*in_ECX + 0x18c))(param_1);
  if (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x18) < 8) {
      iVar1 = iVar1 + 4;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
    iVar1 = XAPILIB__XDeleteSaveGame(&DAT_0040dd48,iVar1);
    if (iVar1 == 0) {
      iVar1 = in_ECX[0x159];
      uVar2 = 1;
      if (iVar1 != in_ECX[0x15a]) {
        while (*(int *)(iVar1 + 0x1c) != *param_1) {
          iVar1 = iVar1 + 0x3c;
          if (iVar1 == in_ECX[0x15a]) {
            return 1;
          }
        }
        FUN_00085540(&stack0x00000000,iVar1);
      }
    }
  }
  return uVar2;
}
