/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C1CE18E87CA95BA45762383C1FA3D638CB0477C9470851C13BDB72AD40B4A6A
 * Entry: 0x00221470, Ghidra index: 7571, label: FUN_00221470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394908;
extern uint32_t PTR_FUN_00394918;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_LAB_003948f4;
extern uint32_t PTR_LAB_00394900;
extern uint32_t PTR_LAB_0039a8c0;
void FUN_00221470(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = PTR_FUN_00394918;
  in_ECX[0x12] = PTR_FUN_0039adec;
  in_ECX[0x1a] = PTR_LAB_0039a8c0;
  in_ECX[0x6c] = PTR_FUN_00394908;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_00394900;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_003948f4;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x19c;
  puVar1 = (undefined4 *)in_ECX[0x75];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x75]);
}
