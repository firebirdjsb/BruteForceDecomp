/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7D2C11C09912BF6E88312CE4B5736D8ACF5FDA7291537DDE68090AAAF66F1D6
 * Entry: 0x0007b090, Ghidra index: 1463, label: FUN_0007b090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000856a0(int param_1,undefined4 *param_2,int *param_3,int *param_4);

void FUN_0007b090(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(unaff_EDI + 0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_000856a0(unaff_EDI + 0x10,local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x14));
}
