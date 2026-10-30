/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF8C7AF06ED75A617626C2D833EC02B1B03349A4A47EBD3E8A531504B63E3323
 * Entry: 0x00174ec0, Ghidra index: 4926, label: FUN_00174ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
void FUN_00174ec0(void)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint unaff_EBX;
  int iVar9;
  char *pcVar10;
  
  iVar3 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x18))(*(int **)(in_EAX + 0x74));
  iVar4 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x38))(*(int **)(in_EAX + 0x74));
joined_r0x00174ee5:
  do {
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return;
      }
      piVar5 = (int *)(**(code **)(**(int **)(in_EAX + 0x74) + 0x20))
                                (*(int **)(in_EAX + 0x74),iVar3);
      iVar6 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x1c))(*(int **)(in_EAX + 0x74),iVar3);
    } while (*piVar5 == 9);
    iVar9 = 0;
    if (0 < iVar4) {
      do {
        iVar7 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x3c))(*(int **)(in_EAX + 0x74),iVar9);
        if ((iVar7 != 0) &&
           ((iVar7 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x3c))(*(int **)(in_EAX + 0x74),iVar9)
            , *(int *)(iVar7 + 0x1c) == iVar6 || (*(int *)(iVar7 + 0x20) == iVar6))))
        goto joined_r0x00174ee5;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar4);
    }
    pcVar10 = *(char **)(unaff_EBX + 0x38);
    if (pcVar10 == (char *)0x0) {
      unaff_EBX = 0;
    }
    else {
      uVar8 = 0xffffffff;
      cVar2 = *pcVar10;
      while (cVar2 != '\0') {
        uVar8 = uVar8 >> 8 ^
                *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ uVar8) & 0xff) * 4);
        pcVar1 = pcVar10 + 1;
        pcVar10 = pcVar10 + 1;
        cVar2 = *pcVar1;
      }
      unaff_EBX = ~uVar8;
    }
    iVar3 = FUN_000de980();
    if (iVar3 != 0) {
      FUN_00173490();
    }
    (**(code **)(**(int **)(in_EAX + 0x74) + 0x90))(*(int **)(in_EAX + 0x74),iVar6);
    iVar3 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x18))(*(int **)(in_EAX + 0x74));
  } while( true );
}
