/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D2B60767B57CA0272CC79C3C042095F57146BD623909F83717EBD07DED1D3F3
 * Entry: 0x00106a80, Ghidra index: 3360, label: FUN_00106a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
uint FUN_00106a80(void)

{
  uint uVar1;
  float10 fVar2;
  float fStack_d8;
  undefined1 local_d4 [8];
  int iStack_cc;
  int iStack_c8;
  
  FUN_00106660();
  uVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d0))(local_d4);
  if ((char)uVar1 != '\0') {
    fVar2 = (float10)FUN_00106860(&fStack_d8);
    uVar1 = CONCAT31((int3)((uint)(int)fVar2 >> 8),1);
    if ((int)(((float)iStack_c8 * 0.1 + 1.0) * (fStack_d8 / ((float)iStack_cc * 0.1 + 1.0))) <=
        (int)fVar2) {
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}
