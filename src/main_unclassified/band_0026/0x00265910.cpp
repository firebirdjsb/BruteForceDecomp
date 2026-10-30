/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E3FCEFCF367BE05A635990FEFE97700F26D84D29137D0AAA7AD98EB64D201BB
 * Entry: 0x00265910, Ghidra index: 8727, label: FUN_00265910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00265910(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int unaff_EDI;
  int local_4;
  
  iVar3 = 0;
  iVar1 = XAPILIB__GetOverlappedResult
                    (*(undefined4 *)(unaff_EDI + 0x10c),unaff_EDI + 0x110,&local_4,0);
  if (iVar1 == 0) {
    iVar1 = XAPILIB__GetLastError();
    if (iVar1 < 0) {
      iVar3 = -0x7fffbffb;
    }
  }
  iVar1 = FUN_00264560();
  if (iVar1 < 0) {
    iVar3 = -0x7fffbffb;
  }
  *(int *)(unaff_EDI + 300) = iVar3;
  *(int *)(unaff_EDI + 0x130) = local_4;
  if (-1 < iVar3) {
    puVar2 = (uint *)(unaff_EDI + 0x118);
    *puVar2 = *(int *)(unaff_EDI + 0x118) + local_4;
    if (*puVar2 <= *(uint *)(unaff_EDI + 0x124)) {
      puVar2 = (uint *)(unaff_EDI + 0x124);
    }
    *(uint *)(unaff_EDI + 0x124) = *puVar2;
  }
  *(undefined1 *)(unaff_EDI + 5) = 0;
  if (*(code **)(unaff_EDI + 0x134) != (code *)0x0) {
    (**(code **)(unaff_EDI + 0x134))(iVar3,local_4,*(undefined4 *)(unaff_EDI + 0x138));
  }
  return;
}
