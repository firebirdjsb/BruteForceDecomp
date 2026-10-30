/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F27A9368BBA21A3D65B24750E067A05F3113811B81303C00B5E10DFC9199680F
 * Entry: 0x00145890, Ghidra index: 4195, label: FUN_00145890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039c0f0;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039c0d8;
extern uint32_t PTR_LAB_0039c0e4;
extern uint32_t PTR_LAB_0039c0ec;
void FUN_00145890(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039c0f0;
  in_ECX[0x12] = PTR_FUN_0039adec;
  in_ECX[0x1a] = PTR_LAB_0039a8c0;
  in_ECX[0x6c] = PTR_LAB_0039c0ec;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039c0e4;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_0039c0d8;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x178;
  iVar1 = in_ECX[0x6d];
  if (iVar1 != 0) {
    FUN_001434c0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  FUN_00156c50();
  return;
}
