/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E25CDA2C9754B31A46335CA4D4DDD8511E3D7C82CBBF4595ED56BD59674917F
 * Entry: 0x0026ea80, Ghidra index: 8777, label: FUN_0026ea80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bb310;
extern uint32_t DAT_00443640;
extern uint32_t DAT_00443644;
extern uint32_t DAT_00469888;
extern uint32_t DAT_0046989c;
undefined4 FUN_0026ea80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  
  if ((in_ECX[1] == 0) && (in_ECX[3] == 0)) {
    iVar3 = (**(code **)(*in_ECX + 0x10))(param_1);
    if (iVar3 < 0) {
      return 0x80004005;
    }
  }
  iVar3 = DAT_00443644;
  DAT_00443640 = param_2;
  DAT_0046989c = param_3;
  DAT_003bb310 = 0xffffffff;
  if (DAT_00443644 != 0) {
    piVar1 = (int *)(DAT_00443644 + 4);
    FUN_00270af0(*(undefined4 *)(*(int *)(DAT_00443644 + 4) + 4));
    *(int *)(*piVar1 + 4) = *piVar1;
    iVar4 = *piVar1;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)iVar4 = iVar4;
    *(int *)(*piVar1 + 8) = *piVar1;
  }
  FUN_0028a170();
  if (in_ECX[1] != 0) {
    FUN_002897b0();
    FUN_00289d80();
    FUN_00289c10();
    FUN_002897b0();
    FUN_00289680();
  }
  if (in_ECX[2] != 0) {
    FUN_002897b0();
    FUN_00289d80();
    FUN_00289c10();
    FUN_002897b0();
    FUN_00289680();
  }
  iVar3 = DAT_00469888;
  iVar4 = *(int *)(DAT_00469888 + 0x30) + -1;
  *(int *)(DAT_00469888 + 0x30) = iVar4;
  puVar2 = (undefined4 *)(*(int *)(iVar3 + 0x2c) + iVar4 * 0xc);
  *(undefined4 *)(iVar3 + 0xc) = *puVar2;
  *(undefined4 *)(iVar3 + 0x10) = puVar2[1];
  *(undefined4 *)(iVar3 + 0x14) = puVar2[2];
  FUN_0028a4f0();
  return 0;
}
