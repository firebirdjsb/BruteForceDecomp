/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 956D5C71F3495FBC5EE65598C785AFEE5566D0DCB932EA6B0245849A0507A26E
 * Entry: 0x00085660, Ghidra index: 1563, label: FUN_00085660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* 0x002EA018 free thunk: the initial imported target reads a guest
 * DWORD stack argument. Caller machine-code ABI remains unverified. */
#include "bf_002ea018_heap_free_guest32.h"
extern void FUN_00086ed0(void);

void FUN_00085660(void)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x6c) {
    FUN_00086ed0();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
}
