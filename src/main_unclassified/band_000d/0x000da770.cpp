/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCC3C8A5E6D7CDBBDB0AE645F62507A319E1A134FA5A3766C29DB1950A780469
 * Entry: 0x000da770, Ghidra index: 2691, label: FUN_000da770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE confirms two guest DWORDs and RET 8, but guest ECX/EDX remain unresolved. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
extern int FUN_0020a620(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern int FUN_000da840(int *param_1);
extern undefined4 FUN_000ee070(void);
extern void FUN_000daa10(int *param_1);

int * FUN_000da770(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  iVar2 = FUN_00160da0(0xffffffff,1);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    if (iVar1 == 7) {
      piVar3 = (int *)FUN_0020a620();
    }
    else if (iVar1 == 10) {
      iVar2 = FUN_002ea01d(0x8c);
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_0016c750(iVar2,0,0);
      }
    }
    else {
      if (iVar1 != 0xe) {
        piVar3 = (int *)FUN_000da840(iVar2);
        return piVar3;
      }
      piVar3 = (int *)FUN_000ee070();
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x28))();
      FUN_000daa10(piVar3,1);
    }
  }
  return piVar3;
}
