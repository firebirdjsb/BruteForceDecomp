/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A257F696AF931AEC3855F49D8A63FE69785D97F3353292CBEAB8B6B6FC3342C5
 * Entry: 0x0006a150, Ghidra index: 1185, label: FUN_0006a150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original free-dispatch jumps through guest DWORD [0x003BC654];
 * this draft passes one 32-bit word. Caller ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
extern void FUN_0006a540(void);

void FUN_0006a150(void)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x3c) {
    FUN_0006a540();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
}
