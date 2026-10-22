/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 301C109CFD6F2532A220395F0E54DD099BCAA35E35627C4FB2A05E54010458A7
 * Entry: 0x000ef250, Ghidra index: 2972, label: FUN_000ef250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ef250(void)

{
  int iVar1;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  bool bVar2;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = (**(code **)*unaff_EDI)();
  if (iVar1 != 2) {
    return;
  }
  iStack_8 = unaff_EDI[9];
  bVar2 = iStack_8 == 0x1345ec09;
  if ((bVar2) || (iStack_8 == 0x12bb72c7)) {
    FUN_000ef880(unaff_EDI,&iStack_4,unaff_EDI + 1,unaff_EDI + 2);
    iVar1 = iStack_4;
    *(int *)((int)unaff_ESI + 0x29) = iStack_4;
    iStack_c = iStack_4;
    FUN_000ee5c0(&iStack_c,0x3f000000);
    unaff_ESI[0xe] = iVar1;
    unaff_ESI[0xf] = iStack_c;
    (**(code **)(*unaff_ESI + 0x34))();
    if (!bVar2) goto LAB_000ef2c8;
LAB_000ef2d0:
    iVar1 = iStack_8;
    FUN_000ef880(unaff_EDI,&iStack_4,unaff_EDI + 3,unaff_EDI + 4);
    *(int *)((int)unaff_ESI + 0x2d) = iStack_4;
    (**(code **)(*unaff_ESI + 0x34))();
    if (bVar2) goto LAB_000ef2fd;
  }
  else {
LAB_000ef2c8:
    iVar1 = iStack_8;
    if (iStack_8 == 0xfe50482) goto LAB_000ef2d0;
  }
  if (iVar1 != 0xe3788ab) {
    return;
  }
LAB_000ef2fd:
  FUN_000ef880(unaff_EDI,&iStack_4,unaff_EDI + 5,unaff_EDI + 6);
  *(int *)((int)unaff_ESI + 0x31) = iStack_4;
  (**(code **)(*unaff_ESI + 0x34))();
  return;
}
