/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 864F3167365F254116D62DCD0EFE387224B7397D107B28FC44E82B65A50FD438
 * Entry: 0x00174fe0, Ghidra index: 4927, label: FUN_00174fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
undefined4 FUN_00174fe0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint *in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  
  iVar4 = param_1;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x74) + 0x18))(*(int **)(param_1 + 0x74));
  iVar9 = 0;
  if (0 < iVar5) {
    do {
      piVar3 = *(int **)(iVar4 + 0x74);
      iVar6 = (**(code **)(*piVar3 + 0x20))(piVar3,iVar9);
      pcVar8 = *(char **)(iVar6 + 0x38);
      if (pcVar8 == (char *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0xffffffff;
        cVar2 = *pcVar8;
        while (cVar2 != '\0') {
          uVar7 = uVar7 >> 8 ^
                  *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ uVar7) & 0xff) * 4);
          pcVar1 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          cVar2 = *pcVar1;
        }
        uVar7 = ~uVar7;
      }
      if (((in_EAX != (uint *)0x0) || (in_EAX = (uint *)(param_1 + 4), in_EAX != (uint *)0x0)) &&
         (*in_EAX == uVar7)) {
        FUN_000dec40(iVar4,iVar9,&param_1);
        return 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar5);
  }
  return 0;
}
