/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76E8B23B2C345936A7130E007287371C4456B3CBF6737A0E065B3E22D3E97C43
 * Entry: 0x00101210, Ghidra index: 3237, label: FUN_00101210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00101210(void)

{
  char in_AL;
  byte *pbVar1;
  int in_ECX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x6c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x6c));
  }
  if (in_ECX != 0) {
    pbVar1 = (byte *)FUN_002ea01d(0x14);
    if (pbVar1 == (byte *)0x0) {
      pbVar1 = (byte *)0x0;
    }
    else {
      *pbVar1 = *pbVar1 & 0xe2 | 2;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1[0x10] = 0;
      pbVar1[0x11] = 0;
      pbVar1[0x12] = 0;
      pbVar1[0x13] = 0;
    }
    *(byte **)(unaff_EDI + 0x6c) = pbVar1;
    FUN_00101280();
    *(byte *)(unaff_EDI + 100) = *(byte *)(unaff_EDI + 100) & 0x7f | in_AL << 7;
  }
  return;
}
