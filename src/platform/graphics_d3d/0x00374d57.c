/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8913004D3D3C1C0C7EC7E5FC8191955AF03FAD06D69A3FD25D299BB766D8B29
 * Entry: 0x00374d57, Ghidra index: 13437, label: FUN_00374d57
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00374d57(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *in_EAX;
  uint uVar3;
  bool bVar4;
  
  iVar1 = *in_EAX;
  if (param_3 == 0) {
    uVar3 = (uint)(in_EAX[0x211] != 0);
    in_EAX[0x211] = uVar3;
    bVar4 = CARRY4(*(uint *)(iVar1 + 0x9400),param_1);
    param_1 = *(uint *)(iVar1 + 0x9400) + param_1;
    param_2 = *(int *)(iVar1 + 0x9410) + param_2 + (uint)bVar4;
  }
  else {
    uVar3 = (uint)(in_EAX[0x211] == 0);
  }
  in_EAX[uVar3 * 2 + 0x20c] = param_1;
  in_EAX[uVar3 * 2 + 0x20d] = param_2;
  uVar3 = in_EAX[0x20d];
  uVar2 = in_EAX[0x20f];
  if (((uVar3 < uVar2) ||
      (((uVar3 == uVar2 && ((uint)in_EAX[0x20c] < (uint)in_EAX[0x20e])) ||
       (in_EAX[0x20e] == 0 && uVar2 == 0)))) && (in_EAX[0x20c] != 0 || uVar3 != 0)) {
    in_EAX[0x210] = 0;
  }
  else {
    in_EAX[0x210] = 1;
  }
  if (in_EAX[in_EAX[0x210] * 2 + 0x20c] != 0 || in_EAX[in_EAX[0x210] * 2 + 0x20d] != 0) {
    *(int *)(iVar1 + 0x9420) = in_EAX[in_EAX[0x210] * 2 + 0x20c];
    if (in_EAX[0x207] == 0) {
      *(undefined4 *)(*in_EAX + 0x9140) = 1;
      in_EAX[0x207] = 1;
    }
  }
  return;
}
