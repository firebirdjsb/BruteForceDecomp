/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F20739B48A2D237E7011F0FF6CA28434B46CE0D1545169AD979AD4E3BDF5962C
 * Entry: 0x00232180, Ghidra index: 7760, label: FUN_00232180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00232180(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  if ((*(byte *)(unaff_EBX + 0x225) & 1) == 0) {
    FUN_0022e780(unaff_EBX);
  }
  uVar2 = *(undefined4 *)(unaff_EBX + 0x234 + param_1 * 0xc);
  uVar3 = *(undefined4 *)(unaff_EBX + 0x230 + param_1 * 0xc);
  iVar1 = unaff_EBX + param_1 * 0xc;
  *unaff_EDI = *(undefined4 *)(iVar1 + 0x22c);
  unaff_EDI[2] = uVar2;
  unaff_EDI[1] = uVar3;
  uVar2 = *(undefined4 *)(iVar1 + 0x260);
  uVar3 = *(undefined4 *)(iVar1 + 0x264);
  *unaff_ESI = *(undefined4 *)(iVar1 + 0x25c);
  unaff_ESI[1] = uVar2;
  unaff_ESI[2] = uVar3;
  return;
}
