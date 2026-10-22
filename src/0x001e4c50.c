/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6D2AA1D07FF6D7BA02B273ABF93940B7E7284B05C5F689C494061D403A12CBB
 * Entry: 0x001e4c50, Ghidra index: 6788, label: FUN_001e4c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_0040753c;
extern uint32_t DAT_0040754c;
extern uint32_t DAT_00407550;
extern uint32_t *DAT_004432f8;
extern char s__s__s_0040c534[];
void FUN_001e4c50(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  byte local_244 [44];
  char local_218;
  char local_217 [275];
  undefined1 local_104 [260];
  
  uVar10 = 0;
  piVar11 = (int *)(param_1 + 0x14);
  while (bVar4 = false, DAT_0040753c != 0) {
    puVar8 = &DAT_0040753c;
    iVar7 = DAT_0040753c;
    do {
      if (*piVar11 == iVar7) {
        bVar4 = true;
      }
      iVar7 = puVar8[1];
      puVar8 = puVar8 + 1;
    } while (iVar7 != 0);
    if (!bVar4) break;
    uVar10 = uVar10 + 1;
    piVar11 = piVar11 + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x14 + uVar10 * 4);
  puVar8 = (undefined4 *)(param_1 + 0x14 + uVar10 * 4);
  uVar5 = FUN_002f46db(&DAT_00407550,local_244);
  do {
    if ((local_244[0] & 0x10) != 0) {
      uVar6 = 0xffffffff;
      pcVar9 = &local_218;
      cVar2 = local_218;
      while (cVar2 != '\0') {
        uVar6 = uVar6 >> 8 ^
                *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ uVar6) & 0xff) * 4);
        pcVar1 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        cVar2 = *pcVar1;
      }
      if (uVar3 == ~uVar6) {
        FUN_002eaa86(local_104,s__s__s_0040c534,&DAT_0040754c,&local_218);
        (**(code **)(*DAT_004432f8 + 0x18))(DAT_004432f8,local_104,1);
        goto LAB_001e4d51;
      }
    }
    iVar7 = FUN_002f47e8(uVar5,local_244);
    if (iVar7 == 0) {
LAB_001e4d51:
      XAPILIB__CloseHandle(uVar5);
      if (uVar10 < *(uint *)(param_1 + 0x10)) {
        do {
          *puVar8 = puVar8[1];
          uVar10 = uVar10 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar10 < *(uint *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x14 + uVar10 * 4) = 0;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      return;
    }
  } while( true );
}
