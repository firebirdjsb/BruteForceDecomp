/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 910042F87D330A8CAE5C1DE9F8D93FE8DC21C02B40014B194126A033DC5AAF9E
 * Entry: 0x001e43e0, Ghidra index: 6776, label: FUN_001e43e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00407584;
extern uint32_t DAT_004698bc;
extern uint32_t *DAT_00469908;
extern uint32_t DAT_00469924;
extern uint32_t DAT_00469974;
void FUN_001e43e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int in_EAX;
  char *pcVar5;
  int iVar6;
  undefined4 ***pppuVar7;
  int *local_20 [2];
  undefined4 **local_18 [4];
  undefined4 local_8;
  uint local_4;
  
  if ((*(int *)(in_EAX + 4) != 0) && (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 6 != 0)) {
    local_4 = 0xf;
    local_8 = 0;
    local_18[0] = (undefined4 **)((uint)local_18[0] & 0xffffff00);
    pcVar4 = &DAT_00407584;
    do {
      pcVar5 = pcVar4;
      pcVar4 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    FUN_0001fed0(&DAT_00407584,pcVar5 + -0x407584);
    FUN_000784c0(0);
    local_20[0] = (int *)0x0;
    iVar6 = FUN_001a5180(local_20);
    piVar3 = local_20[0];
    if (-1 < iVar6) {
      local_20[0] = (int *)0x0;
      pppuVar7 = (undefined4 ***)local_18[0];
      if (local_4 < 0x10) {
        pppuVar7 = local_18;
      }
      iVar6 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,pppuVar7,0x40000001,local_20);
      uVar2 = DAT_00469924;
      uVar1 = DAT_004698bc;
      if (-1 < iVar6) {
        if (DAT_00469974 != '\0') {
          DAT_00469924 = 1;
          DAT_004698bc = 7;
          (**(code **)(*local_20[0] + 0x38))(local_20[0],7);
        }
        FUN_0023a890(0xf07ead84);
      }
      DAT_004698bc = uVar1;
      DAT_00469924 = uVar2;
      if (local_20[0] != (int *)0x0) {
        (**(code **)(*local_20[0] + 8))(local_20[0]);
      }
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_18[0]);
    }
  }
  return;
}
