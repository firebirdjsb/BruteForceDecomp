/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43CF68C7D68417E764AD53AFB8170B9BBAFD16728A7DD6381EB4EB24333D7739
 * Entry: 0x000c00d0, Ghidra index: 2340, label: FUN_000c00d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t PTR_FUN_0039f708;
extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_0039ffc0;
extern uint32_t PTR_LAB_0039f6f4;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000c00d0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039f708;
  in_ECX[0xb] = &PTR_LAB_0039f6f4;
  if (in_ECX[0x1a] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x1a]);
  }
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  piVar2 = (int *)in_ECX[0x30];
  if (piVar2 == (int *)0x0) {
    if (in_ECX[0x1a] == 0) {
      in_ECX[0x1a] = 0;
      in_ECX[0x1b] = 0;
      in_ECX[0x1c] = 0;
      *in_ECX = &PTR_FUN_0039ffc0;
      in_ECX[0xb] = &PTR_LAB_0039fff0;
      FUN_000b2530();
      *in_ECX = &PTR_FUN_0039f8bc;
      piVar2 = (int *)in_ECX[8];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        in_ECX[8] = 0;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x1a]);
  }
  iVar3 = *piVar2;
  if ((0 < iVar3) && (iVar3 < 9)) {
    piVar1 = (int *)(DAT_00469948 + 0x10 + iVar3 * 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_001e7880();
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar2);
}
