/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80F20E4CA07A774937B27408D0552EAFBE6E17E99584C9ABE9015137D339EBE8
 * Entry: 0x002d5670, Ghidra index: 10223, label: FUN_002d5670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d5670(void)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x2c);
  if (((byte)*in_EAX & 0xc) == 4) {
    if (in_EAX[0x18] != 0) {
      uVar1 = FUN_002b2b80();
      iVar2 = FUN_002bee90(iVar3,uVar1);
      goto LAB_002d56b2;
    }
  }
  else {
    iVar2 = in_EAX[0x18];
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == iVar3)) goto LAB_002d56b2;
  }
  iVar2 = 0;
LAB_002d56b2:
  iVar3 = *(ushort *)(iVar2 + 2) - 1;
  while (-1 < iVar3) {
    iVar3 = iVar3 + -1;
    *(undefined1 *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4 + iVar3 * 4) + 0x40) + 0x4c) = 0;
  }
  return;
}
