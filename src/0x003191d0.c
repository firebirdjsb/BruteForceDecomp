/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D2A8C30E70C1FCD11A7DD1C70AF1E4880C18DAAE279DBD8CDD521184CAEE51F
 * Entry: 0x003191d0, Ghidra index: 12217, label: CMcpxBuffer_GetCurrentPosition
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CMcpxBuffer_GetCurrentPosition(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  
  FUN_003118f0();
  if ((*(byte *)(in_ECX + 0x12) & 3) == 3) {
    uVar3 = FUN_0031835f();
    if (param_1 != (uint *)0x0) {
      *param_1 = uVar3;
    }
    if (param_2 != (uint *)0x0) {
      uVar4 = FUN_0031670a(0x20);
      uVar1 = *(uint *)(*(int *)(in_ECX + 0x88) + 0x14);
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
      uVar4 = uVar4 + uVar3;
      *param_2 = uVar4;
      if ((*(ushort *)(in_ECX + 0x12) & 0x200) != 0) {
        uVar1 = *(uint *)(*(int *)(in_ECX + 0x88) + 200);
        if ((uVar1 <= uVar3) &&
           (uVar2 = *(uint *)(*(int *)(in_ECX + 0x88) + 0xcc), uVar3 < uVar1 + uVar2)) {
          uVar4 = uVar4 % uVar2;
          *param_2 = uVar4;
          *param_2 = *(int *)(*(int *)(in_ECX + 0x88) + 200) + uVar4;
          goto LAB_00319298;
        }
      }
      *param_2 = uVar4 % *(uint *)(*(int *)(in_ECX + 0x88) + 0xbc);
    }
  }
  else {
    if (param_1 != (uint *)0x0) {
      *param_1 = *(uint *)(in_ECX + 0x150);
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = *(uint *)(in_ECX + 0x150);
    }
  }
LAB_00319298:
  FUN_00311923();
  return 0;
}
