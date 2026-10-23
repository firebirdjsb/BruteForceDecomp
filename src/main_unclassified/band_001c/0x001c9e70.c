/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC6AD147DAB7CF9F5E484B65B43A24654B4FBACAD10634B5116C1CD0E2211DA7
 * Entry: 0x001c9e70, Ghidra index: 5838, label: FUN_001c9e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c9e70(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = unaff_EDI[1];
  unaff_ESI[2] = unaff_EDI[2];
  *(undefined1 *)(unaff_ESI + 3) = *(undefined1 *)(unaff_EDI + 3);
  *(undefined1 *)((int)unaff_ESI + 0xd) = *(undefined1 *)((int)unaff_EDI + 0xd);
  FUN_001cab70();
  unaff_ESI[0x24] = unaff_EDI[0x24];
  unaff_ESI[0x25] = unaff_EDI[0x25];
  unaff_ESI[0x26] = unaff_EDI[0x26];
  puVar4 = unaff_ESI + 0x28;
  unaff_ESI[0x27] = unaff_EDI[0x27];
  iVar3 = 0xa0 - (int)puVar4;
  iVar5 = 2;
  do {
    *puVar4 = *(undefined4 *)((int)unaff_EDI + iVar3 + (int)puVar4);
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  unaff_ESI[0x2a] = unaff_EDI[0x2a];
  *(undefined1 *)(unaff_ESI + 0x2b) = *(undefined1 *)(unaff_EDI + 0x2b);
  *(undefined1 *)((int)unaff_ESI + 0xad) = *(undefined1 *)((int)unaff_EDI + 0xad);
  *(undefined1 *)((int)unaff_ESI + 0xae) = *(undefined1 *)((int)unaff_EDI + 0xae);
  *(undefined1 *)((int)unaff_ESI + 0xaf) = *(undefined1 *)((int)unaff_EDI + 0xaf);
  *(undefined1 *)(unaff_ESI + 0x2c) = *(undefined1 *)(unaff_EDI + 0x2c);
  unaff_ESI[0x2d] = unaff_EDI[0x2d];
  unaff_ESI[0x2e] = unaff_EDI[0x2e];
  unaff_ESI[0x2f] = unaff_EDI[0x2f];
  *(undefined1 *)(unaff_ESI + 0x30) = *(undefined1 *)(unaff_EDI + 0x30);
  unaff_ESI[0x31] = unaff_EDI[0x31];
  unaff_ESI[0x32] = unaff_EDI[0x32];
  *(undefined1 *)(unaff_ESI + 0x33) = *(undefined1 *)(unaff_EDI + 0x33);
  *(undefined1 *)((int)unaff_ESI + 0xcd) = *(undefined1 *)((int)unaff_EDI + 0xcd);
  *(undefined1 *)((int)unaff_ESI + 0xce) = *(undefined1 *)((int)unaff_EDI + 0xce);
  *(undefined1 *)((int)unaff_ESI + 0xcf) = *(undefined1 *)((int)unaff_EDI + 0xcf);
  *(undefined1 *)(unaff_ESI + 0x34) = *(undefined1 *)(unaff_EDI + 0x34);
  uVar1 = unaff_EDI[0x37];
  uVar2 = unaff_EDI[0x36];
  unaff_ESI[0x35] = unaff_EDI[0x35];
  unaff_ESI[0x36] = uVar2;
  unaff_ESI[0x37] = uVar1;
  unaff_ESI[0x38] = unaff_EDI[0x38];
  FUN_001cb040(unaff_ESI + 0x39);
  FUN_001cb130(unaff_ESI + 0x3d);
  FUN_001cb230(unaff_ESI + 0x41);
  FUN_00248830(unaff_ESI + 0x45);
  return;
}
