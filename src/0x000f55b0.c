/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4608DD4E5538BAD4BDDA0FD6CD0024A8FBC0EC6EB88E000EA69D02DB0DD1B0A1
 * Entry: 0x000f55b0, Ghidra index: 3075, label: FUN_000f55b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469a04;
extern uint32_t DAT_00469b58;
undefined4 FUN_000f55b0(void)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int in_EAX;
  int *piVar4;
  uint uVar5;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 4);
  piVar4 = (int *)FUN_00103000();
  iVar2 = *piVar4;
  bVar3 = false;
  *(int *)(in_EAX + 0xc) = iVar2;
  if (iVar2 == -0x1602dc1f) {
    uVar5 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x268))();
    if (uVar5 < 10) {
      FUN_00101c80();
    }
    else {
      FUN_00101d30();
    }
  }
  else {
    bVar3 = true;
  }
  FUN_000f5510(in_EAX);
  if (bVar3) {
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar4 + 4))(uVar1);
  }
  else {
    DAT_00469a04 = 1;
  }
  if (*(int *)(in_EAX + 0xc) != -0x1602dc1f) {
    FUN_000f50f0();
  }
  return 1;
}
