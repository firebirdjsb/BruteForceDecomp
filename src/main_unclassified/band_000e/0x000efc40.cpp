/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A02C70116239AE28CD584968DD3B5919C3955BEEE1E9792CD70BDB3FE994AA9
 * Entry: 0x000efc40, Ghidra index: 2987, label: FUN_000efc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000efc40(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *unaff_EBP;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (in_EAX != (int *)0x0) {
    iVar1 = (**(code **)(*in_EAX + 4))();
    if (iVar1 == 8) {
      puVar2 = (undefined4 *)FUN_00103000();
      uStack_8 = 0x98e6d01;
      uStack_4 = 0xcc05846;
      piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      iVar1 = *piVar3;
      uVar4 = FUN_001e97c0(in_EAX[1],*(undefined4 *)(in_EAX[1] + 0x60),0);
      uVar4 = FUN_001e97c0(uVar4);
      (**(code **)(iVar1 + 0x38))(&uStack_8,uVar4);
      if (unaff_EBP != (undefined4 *)0x0) {
        *unaff_EBP = *puVar2;
      }
      return 1;
    }
  }
  return 0;
}
