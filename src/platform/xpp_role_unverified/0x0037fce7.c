/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3D1A0EEFD1E2D7A8B6F9DCEC20C4C416F3E1F03813C84E6C2CCB144B52FC0B0
 * Entry: 0x0037fce7, Ghidra index: 13514, label: XGetDeviceChanges
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool XAPILIB__XGetDeviceChanges(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = false;
  if (param_1[1] == 0) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    KeRaiseIrqlToDpcLevel();
    *param_2 = ~param_1[2] & *param_1;
    uVar1 = *param_1;
    uVar2 = param_1[2];
    *param_3 = ~uVar1 & uVar2;
    uVar3 = param_1[1] & param_1[2] & *param_1;
    *param_3 = ~uVar1 & uVar2 | uVar3;
    *param_2 = *param_2 | uVar3;
    param_1[1] = 0;
    param_1[2] = *param_1;
    KfLowerIrql();
    bVar4 = *param_2 != 0 || *param_3 != 0;
  }
  return bVar4;
}
