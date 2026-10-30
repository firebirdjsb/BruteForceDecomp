/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06F441AA3E3AEB6F1A50F1EBE64C46103DEA14822374F97861B5056125D6491F
 * Entry: 0x002316a0, Ghidra index: 7752, label: FUN_002316a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002316a0(int param_1)

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
  uVar2 = *(undefined4 *)(unaff_EBX + 0x24c + param_1 * 0xc);
  uVar3 = *(undefined4 *)(unaff_EBX + 0x248 + param_1 * 0xc);
  iVar1 = unaff_EBX + param_1 * 0xc;
  *unaff_EDI = *(undefined4 *)(iVar1 + 0x244);
  unaff_EDI[2] = uVar2;
  unaff_EDI[1] = uVar3;
  uVar2 = *(undefined4 *)(iVar1 + 0x278);
  uVar3 = *(undefined4 *)(iVar1 + 0x27c);
  *unaff_ESI = *(undefined4 *)(iVar1 + 0x274);
  unaff_ESI[1] = uVar2;
  unaff_ESI[2] = uVar3;
  return;
}
