/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3F40600046657506599D4B51D2FF5CE292204A5A5E9D31220CE924CA8DBDC4E
 * Entry: 0x0005f7b0, Ghidra index: 1007, label: FUN_0005f7b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_002389c0(void);
extern void FUN_0029f3a0(void);
extern void FUN_00060dc0(void);

void FUN_0005f7b0(void)

{
  int *piVar1;
  int unaff_EBX;
  
  FUN_002389c0();
  FUN_0029f3a0();
  piVar1 = *(int **)(unaff_EBX + 0xc4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_EBX + 0xc4) = 0;
  }
  piVar1 = *(int **)(unaff_EBX + 0xc0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_EBX + 0xc0) = 0;
  }
  piVar1 = *(int **)(unaff_EBX + 0xb8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(int *)(unaff_EBX + 0xb8) = 0;
  }
  FUN_00060dc0();
  return;
}
