/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E81ADE248D5BFB0D78B3F60DF7A117C2329DAE1C050A9B860A65B05B9637A9E3
 * Entry: 0x00174180, Ghidra index: 4902, label: FUN_00174180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400340;
extern uint32_t DAT_00400354;
extern uint32_t DAT_0040c7d0;
extern uint32_t *DAT_004432f8;
undefined4 FUN_00174180(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puStack_358;
  undefined4 uStack_354;
  char acStack_32c [275];
  undefined4 uStack_219;
  undefined1 local_208 [244];
  undefined1 auStack_114 [276];
  
  puVar6 = DAT_00400340;
  if (DAT_00400354 < 0x10) {
    puVar6 = &DAT_00400340;
  }
  uStack_354 = 0x104;
  puStack_358 = local_208;
  cVar1 = (**(code **)(*DAT_004432f8 + 0x28))(DAT_004432f8,puVar6);
  if (cVar1 == '\x01') {
    pcVar4 = &DAT_0040c7d0;
    do {
      pcVar2 = pcVar4;
      pcVar4 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    puVar6 = &uStack_219;
    do {
      pcVar4 = (char *)((int)puVar6 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (*pcVar4 != '\0');
    puVar8 = (undefined4 *)&DAT_0040c7d0;
    for (uVar7 = (uint)(pcVar2 + -0x40c7cf) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = (uint)(pcVar2 + -0x40c7cf) & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar3 = FUN_002f46db((int)&uStack_219 + 1,&puStack_358);
    if (iVar3 != -1) {
      do {
        if (((uint)puStack_358 & 0x10) == 0) {
          FUN_002ea78d(acStack_32c,0,0,auStack_114,0);
          pcVar4 = _strrchr(acStack_32c,0x2e);
          if (pcVar4 != (char *)0x0) {
            *pcVar4 = '\0';
          }
          FUN_00174460(acStack_32c);
        }
        iVar5 = FUN_002f47e8(iVar3,&puStack_358);
      } while (iVar5 != 0);
      XAPILIB__CloseHandle(iVar3);
    }
  }
  return 1;
}
