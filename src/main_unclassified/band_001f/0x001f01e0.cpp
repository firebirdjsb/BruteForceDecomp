/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D704FAD6FEFEAE03F460FA8274B9BDB18E6E1557C1905BCA71851941D80B5FA
 * Entry: 0x001f01e0, Ghidra index: 6977, label: FUN_001f01e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc764;
extern uint32_t DAT_00469aac;
extern uint32_t *DAT_00469b58;
extern char s_Parameters_004071bc[];
undefined4 FUN_001f01e0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = s_Parameters_004071bc;
  iVar3 = 8;
  FUN_002e5920(s_Parameters_004071bc);
  iVar2 = FUN_002e4a30(pcVar4);
  if (iVar2 != 0) {
    iVar3 = (&DAT_003bc764)[*(int *)(iVar2 + 0x204) * 2];
  }
  iVar2 = FUN_001f0130();
  if (iVar3 <= iVar2) {
    return 0;
  }
  cVar1 = (**(code **)*DAT_00469b58)();
  if (cVar1 == '\0') {
    return 1;
  }
  if ((*(int *)(DAT_00469aac + 0xc4c) != 0) &&
     (*(int *)(*(int *)(DAT_00469aac + 0xc4c) + 0x14) == 0x62bd076)) {
    cVar1 = FUN_00088bc0();
    if ((cVar1 != '\0') && (cVar1 = FUN_00088c30(), cVar1 == '\0')) {
      return 1;
    }
    return 0;
  }
  return 1;
}
