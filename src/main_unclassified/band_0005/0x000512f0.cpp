/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E0561BA795FB88030F939CF5F458E8C41FE2D0E2EDCCBEAD7E71FB3F00FE322
 * Entry: 0x000512f0, Ghidra index: 734, label: FUN_000512f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Recorded 0x002EA018 -> 0x00067BF0 -> initial 0x00237EC0
 * free-thunk boundary. The original target receives a guest32 stack
 * DWORD; this source callsite and its guest registers are ABI_UNVERIFIED. */
#include "bf_002ea018_heap_free_guest32.h"
extern void FUN_00051630(void);

void FUN_000512f0(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar2 = *(int *)(unaff_EBX + 4);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBX + 4) = 0;
    *(undefined4 *)(unaff_EBX + 8) = 0;
    *(undefined4 *)(unaff_EBX + 0xc) = 0;
    return;
  }
  iVar1 = *(int *)(unaff_EBX + 8);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x70) {
    FUN_00051630();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
}
