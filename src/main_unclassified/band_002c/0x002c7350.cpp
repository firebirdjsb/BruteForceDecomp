/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF92F49872AF784543D99ECD8FA5670AD50ED256F6DB44D88E51D34F77302EDE
 * Entry: 0x002c7350, Ghidra index: 10098, label: FUN_002c7350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_insert_active_int__name___s__alr_00402668[];
extern char s_insert_active_int__tried_to_inse_004026a4[];
void FUN_002c7350(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  
  pcVar2 = *(char **)(param_1 + 4);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar2;
    if (pcVar3 != pcVar2 + 1) {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = FUN_002b2b80();
      iVar6 = FUN_002beb90(param_1,uVar5);
      if (iVar6 == 0) {
        FUN_002c6ff0(*(undefined4 *)(in_ECX + 0xc));
        *(int *)(param_1 + 0x18) = in_ECX;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        return;
      }
      FID_conflict__wprintf(s_insert_active_int__name___s__alr_00402668,pcVar2);
      return;
    }
  }
  FID_conflict__wprintf(s_insert_active_int__tried_to_inse_004026a4);
  return;
}
