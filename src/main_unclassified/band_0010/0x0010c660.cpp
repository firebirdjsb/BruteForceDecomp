/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6AB3A97D3DF35219CB2866DCCFF8EAC799454919E13C2FAEF40FCCCBBF1F6119
 * Entry: 0x0010c660, Ghidra index: 3469, label: FUN_0010c660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0010c660(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EBX;
  
  iVar1 = FUN_002ea01d(0xf4);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00109f80(iVar1);
  }
  FUN_0010ad40(piVar2);
  *(byte *)(piVar2 + 10) = *(byte *)(piVar2 + 10) | 8;
  if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)unaff_EBX + 0x9f),(char)unaff_EBX[0x27]),
                        *(undefined1 *)((int)unaff_EBX + 0x9d)),
               *(undefined1 *)((int)unaff_EBX + 0x9e)) != 0) {
    piVar2[0x24] = unaff_EBX[0x27];
  }
  if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)unaff_EBX + 0xa3),(char)unaff_EBX[0x28]),
                        *(undefined1 *)((int)unaff_EBX + 0xa1)),
               *(undefined1 *)((int)unaff_EBX + 0xa2)) != 0) {
    piVar2[0x25] = unaff_EBX[0x28];
  }
  piVar2[0x22] = 2;
  piVar2[0x23] = 2;
  FUN_0010ab60();
  FUN_0010a7d0();
  piVar2[9] = *param_1;
  (**(code **)(*piVar2 + 0x2c))();
  FUN_001611d0();
  iVar1 = unaff_EBX[0x19];
  if ((iVar1 != 0) && (unaff_EBX[0x1a] - iVar1 >> 2 == 1)) {
    iVar3 = 0;
    if ((iVar1 == 0) || (unaff_EBX[0x1a] - iVar1 >> 2 == 0)) {
      if ((*(byte *)(unaff_EBX + 0x20) & 1) == 0) {
        if (unaff_EBX[0x19] == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = unaff_EBX[0x1a] - unaff_EBX[0x19] >> 2;
        }
        iVar3 = iVar3 + -1;
      }
      else {
        iVar3 = 0;
      }
    }
    unaff_EBX[0x1c] = iVar3;
    if ((unaff_EBX[1] != 0) && (piVar2 = *(int **)(unaff_EBX[1] + 0x94), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x28))();
    }
  }
  (**(code **)(*unaff_EBX + 0x1c))();
  if (unaff_EBX[0x19] == 0) {
    return -1;
  }
  return (unaff_EBX[0x1a] - unaff_EBX[0x19] >> 2) + -1;
}
