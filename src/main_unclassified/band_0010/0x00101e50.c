/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F10CBCA5743B5E5ADECB54C1518DB5A6A531D920C24DE56395DB90AF6D0349A6
 * Entry: 0x00101e50, Ghidra index: 3257, label: FUN_00101e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_00101e50(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (in_EAX != (int *)0x0) {
    iVar3 = (**(code **)(*in_EAX + 4))();
    if (iVar3 == 8) {
      piVar4 = (int *)FUN_00103000();
      iVar2 = DAT_00469b58;
      iVar3 = *piVar4;
      if (((iVar3 != -0x1602dc1f) && (iVar3 != 0xa6de845)) && (iVar3 != 0x15a3164e)) {
        iVar1 = in_EAX[1];
        *param_1 = iVar3;
        uStack_8 = 0x19a2352e;
        uStack_4 = 0xcc05846;
        piVar4 = (int *)(**(code **)(**(int **)(iVar2 + 8) + 0x78))();
        iVar3 = *piVar4;
        uVar5 = FUN_001e97c0(iVar1,*(undefined4 *)(iVar1 + 0x60),0);
        uVar5 = FUN_001e97c0(uVar5);
        (**(code **)(iVar3 + 0x38))(&uStack_8,uVar5);
        return 1;
      }
    }
  }
  return 0;
}
