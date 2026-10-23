/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAE842F6B6C3CA8D6A82DA767EAD255BB50ACA7D2D770AF66B15545C0CD75399
 * Entry: 0x001579b0, Ghidra index: 4486, label: FUN_001579b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001579b0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  in_ECX[0x10] = param_1[0x10];
  uVar3 = (**(code **)(*param_1 + 0x40))();
  (**(code **)(iVar1 + 0x50))(uVar3);
  cVar2 = *(char *)((int)param_1 + 0x79);
  *(char *)((int)in_ECX + 0x79) = cVar2;
  if (((cVar2 != '\0') && ((*(byte *)((int)in_ECX + 0x26) & 0x10) == 0)) && (in_ECX[2] != 0)) {
    piVar4 = (int *)FUN_000e0350(in_ECX[2],&stack0x00000000,in_ECX);
    in_ECX[5] = *piVar4;
    *(byte *)((int)in_ECX + 0x26) = *(byte *)((int)in_ECX + 0x26) | 0x10;
  }
  iVar1 = param_1[0x45];
  in_ECX[0x44] = param_1[0x44];
  in_ECX[0x45] = iVar1;
  if (((*(byte *)((int)param_1 + 0x71) & 0x10) == 0) ||
     ((*(byte *)((int)param_1 + 0x71) & 0x20) == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  *(byte *)((int)in_ECX + 0x71) =
       *(byte *)((int)in_ECX + 0x71) ^ (cVar2 << 4 ^ *(byte *)((int)in_ECX + 0x71)) & 0x10;
  if (in_ECX + 0x55 != param_1 + 0x55) {
    in_ECX[0x56] = param_1[0x56];
    in_ECX[0x57] = param_1[0x57];
    in_ECX[0x58] = param_1[0x58];
  }
  in_ECX[0x54] = param_1[0x54];
  in_ECX[0x11] = param_1[0x11];
  FUN_0010bc40();
  return;
}
