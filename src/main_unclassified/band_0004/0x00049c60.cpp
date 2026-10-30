/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 501DE8642151EAE21D56E93FA387916A987AE2C80AC68B2625898CAF6CD6A8DD
 * Entry: 0x00049c60, Ghidra index: 592, label: FUN_00049c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_000388b0(int param_1);

int FUN_00049c60(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_000388b0(*(undefined4 *)(in_ECX + 0x358));
  if ((iVar2 != 0) && ((iVar1 = *(int *)(iVar2 + 100), iVar1 == 0 || ((2 < iVar1 && (iVar1 < 5))))))
  {
    iVar2 = 0;
  }
  return iVar2;
}
