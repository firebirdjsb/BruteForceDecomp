/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A228054ADD30534E96BFF7768C2A7991EA853187311A60B27F283FE82F281213
 * Entry: 0x00167e50, Ghidra index: 4735, label: FUN_00167e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00167e50(void)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  byte *unaff_ESI;
  int unaff_EDI;
  
  if ((1 << ((byte)*(short *)unaff_ESI & 0x1f) < unaff_EDI) || (*(short *)unaff_ESI == 0)) {
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 0;
    unaff_ESI[0] = 0;
    unaff_ESI[1] = 0;
    if (*(int *)(unaff_ESI + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(unaff_ESI + 4));
    }
    sVar3 = *(short *)unaff_ESI;
    iVar1 = 1 << ((byte)sVar3 & 0x1f);
    if (iVar1 < unaff_EDI) {
      do {
        iVar1 = iVar1 * 2;
        sVar3 = sVar3 + 1;
      } while (iVar1 < unaff_EDI);
      *(short *)unaff_ESI = sVar3;
    }
    iVar1 = 1 << (*unaff_ESI & 0x1f);
    uVar2 = thunk_FUN_002ea01d(iVar1 * iVar1 * 4);
    *(undefined4 *)(unaff_ESI + 4) = uVar2;
  }
  *(short *)(unaff_ESI + 2) = (short)unaff_EDI;
  return;
}
