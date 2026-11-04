/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A3D6F0A864CF8CEF54B2513E1D7E0F342675AAD0FBEA2A34A3A6C68B206DE88
 * Entry: 0x001352a0, Ghidra index: 3872, label: FUN_001352a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D direct/indirect guest32 allocator boundary:
 * one source size DWORD and 32-bit EAX result. Guest-memory ABI unverified. */
#include "bf_002ea01d_allocator_guest32.h"
void FUN_001352a0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_EAX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *local_10;
  undefined4 local_c;
  
  iVar4 = FUN_002ea01d(100);
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_00136980();
  }
  puVar5[0x18] = in_EAX;
  FUN_00136ab0(puVar5,&param_1,param_1);
  puVar2 = *(undefined4 **)(in_EAX + 8);
  cVar1 = *(char *)((int)puVar2[1] + 0x15);
  puVar3 = puVar2;
  puVar9 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((undefined4 *)puVar9[3] < param_1) {
      puVar6 = (undefined4 *)puVar9[2];
      puVar9 = puVar3;
    }
    else {
      puVar6 = (undefined4 *)*puVar9;
    }
    puVar3 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x15);
  }
  if ((puVar3 == puVar2) || (param_1 < (undefined4 *)puVar3[3])) {
    local_10 = puVar2;
    ppuVar7 = &local_10;
  }
  else {
    ppuVar7 = &param_1;
  }
  if (*ppuVar7 != *(undefined4 **)(in_EAX + 8)) {
    param_1 = puVar3;
    (**(code **)*puVar5)(1);
    return;
  }
  local_10 = param_1;
  local_c = 0;
  param_1 = puVar3;
  piVar8 = (int *)FUN_00135410(&local_10);
  *(undefined4 **)(*piVar8 + 0x10) = puVar5;
  return;
}
