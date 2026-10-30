/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4AF20EA3A50835F05D5C4F646BB8584EEA56EEFE8287A99B1B9D6383CE784F2
 * Entry: 0x0007f960, Ghidra index: 1506, label: FUN_0007f960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t DAT_00469914;
extern uint32_t DAT_00469918;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046cfd8;
extern uint32_t _DAT_00469910;
extern uint32_t _DAT_0046991c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007f960(void)

{
  int *in_EAX;
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_8;
  
  *(byte *)(in_EAX + 0x16f) = *(byte *)(in_EAX + 0x16f) | 8;
  FUN_0007f620();
  if (in_EAX[0x170] == 0) {
    FUN_00078e60();
    DAT_004698d0 = 0;
    if (DAT_00469918 != '\0') {
      DAT_0046cfd8 = DAT_00469914;
      _DAT_0046991c = 0;
      DAT_00469918 = '\0';
    }
    _DAT_00469910 = 1;
    (**(code **)(*in_EAX + 0x138))();
    if ((uint)in_EAX[0x1a4] < 0x10) {
      piVar2 = in_EAX + 0x19f;
    }
    else {
      piVar2 = (int *)in_EAX[0x19f];
    }
    uVar1 = (**(code **)(*in_EAX + 0x60))(piVar2);
    FUN_00080700(uVar1,piVar2);
    piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar2 + 0x14))(local_8);
    DAT_004698d4 = 0;
    DAT_004698d8 = 0;
  }
  FUN_00069780(0x3f800000);
  FUN_001ed840();
  (**(code **)(*in_EAX + 0x240))();
  return 1;
}
