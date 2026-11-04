/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AABE2B007D0293C1F7FA1C5AC0A1089240965685D4711AF3B42EC810FD6FB93A
 * Entry: 0x000da800, Ghidra index: 2692, label: FUN_000da800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE confirms two guest DWORDs and RET 8, but guest ECX/EDX remain unresolved. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
extern void FUN_000da880(int param_1,undefined4 guest_second_word);
extern int FUN_000da8f0(void);

int FUN_000da800(void)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EDI;
  
  iVar2 = 0;
  piVar1 = (int *)FUN_00160da0(0xffffffff,1);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 != 0) {
      FUN_000da880(unaff_EDI,iVar2,1);
      FUN_000da8f0(unaff_EDI);
    }
  }
  return iVar2;
}
