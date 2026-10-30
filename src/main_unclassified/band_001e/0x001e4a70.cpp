/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8036BBA700328FCB59F285283A5FB9C9ACF1871BA4C1474C7FE4E91C5F3F2839
 * Entry: 0x001e4a70, Ghidra index: 6786, label: FUN_001e4a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_0040754c;
extern uint32_t DAT_00407550;
extern uint32_t *DAT_004432f8;
extern char s__s__s_0040c534[];
undefined4 FUN_001e4a70(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint *puVar8;
  uint *puVar9;
  uint local_264 [8];
  byte local_244 [44];
  char local_218;
  char local_217 [275];
  undefined1 local_104 [260];
  
  puVar8 = local_264;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  iVar5 = FUN_002f46db(&DAT_00407550,local_244);
  if (iVar5 == -1) {
    return 0xffffff00;
  }
  do {
    if ((local_244[0] & 0x10) != 0) {
      uVar3 = 0xffffffff;
      pcVar7 = &local_218;
      cVar2 = local_218;
      while (cVar2 != '\0') {
        uVar3 = uVar3 >> 8 ^
                *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ uVar3) & 0xff) * 4);
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
        cVar2 = *pcVar1;
      }
      uVar6 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        puVar8 = (uint *)(param_1 + 0x14);
        do {
          if (*puVar8 == ~uVar3) {
            local_264[uVar6] = ~uVar3;
            goto LAB_001e4b4b;
          }
          uVar6 = uVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x10));
      }
      FUN_002eaa86(local_104,s__s__s_0040c534,&DAT_0040754c,&local_218);
      (**(code **)(*DAT_004432f8 + 0x18))(DAT_004432f8,local_104,1);
    }
LAB_001e4b4b:
    iVar4 = FUN_002f47e8(iVar5,local_244);
    if (iVar4 == 0) {
      XAPILIB__CloseHandle(iVar5);
      iVar5 = 0;
      uVar3 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        puVar8 = (uint *)(param_1 + 0x14);
        puVar9 = puVar8;
        do {
          if (local_264[uVar3] == *puVar9) {
            *puVar8 = *puVar9;
            iVar5 = iVar5 + 1;
            puVar8 = puVar8 + 1;
          }
          uVar3 = uVar3 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x10));
      }
      *(int *)(param_1 + 0x10) = iVar5;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  } while( true );
}
