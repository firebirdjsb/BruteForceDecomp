/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFC5DB00940EB58E53FB85DAD1916E8263D04903ACFE02BB42613F687D7DAA79
 * Entry: 0x0005b640, Ghidra index: 922, label: FUN_0005b640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_002ad910(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0014bb20(void);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_0014bc10(void);
extern void FUN_0005d2f0(void);

void FUN_0005b640(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *unaff_EDI;
  
  unaff_EDI[2] = 0;
  unaff_EDI[1] = 0;
  *unaff_EDI = 0;
  unaff_EDI[5] = 0;
  *(undefined1 *)(unaff_EDI + 0xd) = (undefined1)param_1;
  iVar1 = FUN_002ad910(unaff_EDI + 0xd);
  unaff_EDI[0xe] = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(undefined4 *)(unaff_EDI[0xe] + 4) = unaff_EDI[0xe];
  *(undefined4 *)unaff_EDI[0xe] = unaff_EDI[0xe];
  *(undefined4 *)(unaff_EDI[0xe] + 8) = unaff_EDI[0xe];
  unaff_EDI[0xf] = 0;
  *(byte *)(unaff_EDI + 0x10) = *(byte *)(unaff_EDI + 0x10) & 0xfc;
  unaff_EDI[3] = param_2;
  unaff_EDI[9] = param_1;
  if (param_1 != 0) {
    iVar1 = FUN_002ea01d(0xc0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0014bb20();
    }
    if (unaff_EDI[5] != iVar1) {
      FUN_0008f6a0(iVar1);
    }
    FUN_0014bc10();
    iVar1 = unaff_EDI[5];
    if (*(int *)(iVar1 + 0xb0) != 0) {
      FUN_0008f6a0(0);
    }
    *(undefined4 **)(iVar1 + 0xb4) = unaff_EDI;
    *(undefined4 *)(iVar1 + 4) = 0xfb753b53;
  }
  unaff_EDI[8] = 0;
  unaff_EDI[7] = 0;
  iVar1 = FUN_002ea01d(0x20);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    FUN_0005d2f0();
    FUN_0005d2f0();
    unaff_EDI[10] = iVar1;
    unaff_EDI[6] = 0;
    unaff_EDI[0xb] = 0;
    unaff_EDI[0xc] = 0;
    return;
  }
  unaff_EDI[10] = 0;
  unaff_EDI[6] = 0;
  unaff_EDI[0xb] = 0;
  unaff_EDI[0xc] = 0;
  return;
}
