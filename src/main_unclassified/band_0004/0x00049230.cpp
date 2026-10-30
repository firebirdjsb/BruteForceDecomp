/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BA66118E5270036D0300E3389682049E2407F1E7EAF122D8BCB4636332E8A51
 * Entry: 0x00049230, Ghidra index: 583, label: FUN_00049230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001bd30(uint32_t unaff_ESI);
extern void FUN_000493e0(void);
extern void FUN_000492e0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5);

void FUN_00049230(void)

{
  uint uVar1;
  int iVar2;
  int in_EAX;
  int unaff_EDI;
  int local_8;
  undefined4 local_4;
  
  if (unaff_EDI != in_EAX) {
    if (*(uint *)(in_EAX + 0x10) == 0) {
      FUN_0001bd30();
      return;
    }
    uVar1 = *(uint *)(unaff_EDI + 0x10);
    iVar2 = *(int *)(in_EAX + 0xc);
    if (*(uint *)(in_EAX + 0x10) <= uVar1) {
      FUN_000493e0(iVar2);
      FUN_000492e0(&local_8,local_8,local_4,*(int *)(unaff_EDI + 0x10) + *(int *)(unaff_EDI + 0xc),
                   unaff_EDI);
      return;
    }
    local_8 = iVar2;
    FUN_000493e0(iVar2);
    FUN_00049410(unaff_EDI,*(int *)(unaff_EDI + 0x10) + *(int *)(unaff_EDI + 0xc),unaff_EDI,
                 uVar1 + iVar2,in_EAX,*(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 0xc),in_EAX);
  }
  return;
}
