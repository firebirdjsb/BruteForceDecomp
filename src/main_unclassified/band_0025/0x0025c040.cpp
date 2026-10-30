/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80685BCC9F41D79762F3682CA058CD1AF3342B66595FDCEE12F3017A42091E96
 * Entry: 0x0025c040, Ghidra index: 8551, label: FUN_0025c040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039307c;
extern uint32_t PTR_FUN_00393090;
void FUN_0025c040(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_EBX;
  undefined1 local_4 [4];
  
  *unaff_EBX = PTR_FUN_00393090;
  unaff_EBX[1] = PTR_FUN_0039307c;
  FUN_0025c100();
  puVar1 = (undefined4 *)unaff_EBX[10];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_EBX[10]);
}
