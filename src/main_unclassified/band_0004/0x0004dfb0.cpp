/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70B32B57B4DBCA12D299D0F59BA34F37A71EEC21DB3F8CE212A0F86506E48FBB
 * Entry: 0x0004dfb0, Ghidra index: 663, label: FUN_0004dfb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004dfb0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  iVar1 = FUN_000120f0();
  if (iVar1 != 0) {
    FUN_0004dd70();
    piVar2 = (int *)FUN_000120f0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x15c))(10,0);
      *(undefined4 *)(unaff_EDI + 0x498) = 2;
    }
  }
  return;
}
