/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75AC14C042E583F69BDCFEE90EA3DAA55C9DA4663835699D2ADA7C0441DF941F
 * Entry: 0x00086670, Ghidra index: 1581, label: FUN_00086670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint FUN_001a60e0(undefined4 *param_1);
extern bool FUN_001a6140(void);

extern uint32_t DAT_004698bc;
extern uint32_t *DAT_00469908;
extern uint32_t DAT_00469924;
extern uint32_t DAT_00469974;
extern uint32_t _DAT_00000000;
/* WARNING: Removing unreachable block (ram,0x00086741) */
/* WARNING: Removing unreachable block (ram,0x000866be) */
/* WARNING: Removing unreachable block (ram,0x00086763) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00086670(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  char *in_EAX;
  int iVar5;
  int *local_4;
  
  if ((in_EAX != (char *)0x0) && (*in_EAX != '\0')) {
    local_4 = (int *)0x0;
    iVar5 = FUN_001a60e0(&local_4);
    if ((iVar5 < 0) ||
       (iVar5 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908), uVar2 = DAT_00469924,
       uVar1 = DAT_004698bc, iVar5 < 0)) {
      if (local_4 != (int *)0x0) {
        (**(code **)(*local_4 + 8))(local_4);
      }
    }
    else {
      if (DAT_00469974 != '\0') {
        DAT_00469924 = 1;
        DAT_004698bc = 7;
        (**(code **)(_DAT_00000000 + 0x38))(0,7);
      }
      piVar3 = local_4;
      cVar4 = FUN_001a6140(0);
      DAT_004698bc = uVar1;
      DAT_00469924 = uVar2;
      if (cVar4 != '\0') {
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        return 1;
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        return 0;
      }
    }
  }
  return 0;
}
