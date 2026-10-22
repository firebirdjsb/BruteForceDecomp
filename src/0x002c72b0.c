/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED1B765493D3D648338E0CEAFACE94E89D5AA2E82820ABC89A05DCBE178168EC
 * Entry: 0x002c72b0, Ghidra index: 10097, label: FUN_002c72b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_insert_active_float__name___s__a_004026e4[];
extern char s_insert_active_float__tried_to_in_00402728[];
void FUN_002c72b0(int param_1)

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
        FUN_002c6ff0(*(undefined4 *)(in_ECX + 8));
        *(int *)(param_1 + 0x18) = in_ECX;
        return;
      }
      FID_conflict__wprintf(s_insert_active_float__name___s__a_004026e4,pcVar2);
      return;
    }
  }
  FID_conflict__wprintf(s_insert_active_float__tried_to_in_00402728);
  return;
}
