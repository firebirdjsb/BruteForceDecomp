/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C884FF015E58E37753BAC0D025A20073BD4A4F45AB1977E83C143651D6E3D63B
 * Entry: 0x0029aac0, Ghidra index: 9414, label: FUN_0029aac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0029aac0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  bool bVar3;
  
  bVar3 = false;
  FUN_0029a3b0();
  FUN_00299900();
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 == 0x3a) || (iVar1 == 0x2e)) {
    bVar3 = iVar1 == 0x3a;
    uVar2 = FUN_00296110();
    *(undefined4 *)(unaff_ESI + 4) = uVar2;
    FUN_00299cd0();
    uVar2 = FUN_0029a3b0();
    FUN_00299580(0xb,uVar2,1);
    *unaff_EBX = 3;
  }
  return bVar3;
}
