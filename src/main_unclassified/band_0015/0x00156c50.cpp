/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F958EAB356653612A3FA821C6FECE49F777BD280809546BC8D9E9DE59D0119B1
 * Entry: 0x00156c50, Ghidra index: 4481, label: FUN_00156c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039adf8;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039add8;
extern uint32_t PTR_LAB_0039ade4;
void FUN_00156c50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  undefined1 local_4 [4];
  
  *in_ECX = PTR_FUN_0039adf8;
  in_ECX[0x12] = PTR_FUN_0039adec;
  in_ECX[0x1a] = PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039ade4;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_0039add8;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x170;
  FUN_00159430();
  FUN_001583a0();
  if (in_ECX[0x42] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x42]);
  }
  iVar1 = in_ECX[0x20];
  if (iVar1 != 0) {
    FUN_0001fe00(iVar1,8,*(undefined4 *)(iVar1 + -4),(uintptr_t)0x00012080U);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1 + -4);
  }
  in_ECX[0x69] = 0;
  puVar2 = (undefined4 *)in_ECX[0x67];
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  FUN_001298b0(local_4,uVar3,puVar2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x67]);
}
