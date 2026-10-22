/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E07D9972EE723C147A9D243946D9AE2B159CE63FF6646E5B5F08556EB737D738
 * Entry: 0x00219e40, Ghidra index: 7504, label: FUN_00219e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d004;
int * FUN_00219e40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_EAX + 0xc0);
  iVar4 = *(int *)(in_EAX + 0xbc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (iVar4 == iVar1) {
    return (int *)0x0;
  }
  while (((piVar3 = (int *)FUN_00160da0(0xffffffff,1), piVar3 == (int *)0x0 || (piVar3[1] != 4)) ||
         (piVar3 = (int *)(**(code **)(*piVar3 + 8))(uVar2), piVar3 == (int *)0x0))) {
    iVar4 = iVar4 + 4;
    if (iVar4 == iVar1) {
      return (int *)0x0;
    }
  }
  FUN_000da880(uVar2,piVar3,1);
  FUN_000da8f0(uVar2);
  (**(code **)(*piVar3 + 0xe0))(param_1,&DAT_0046d004);
  return piVar3;
}
