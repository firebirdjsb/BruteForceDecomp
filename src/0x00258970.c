/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB8C7632C843AE3088452957D1E336DF06F3E04905157618464BDB4001CB1AE9
 * Entry: 0x00258970, Ghidra index: 8479, label: FUN_00258970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_fblock___u___d__0___1_004062b4[];
extern char s_lrg_free_________________________004062cc[];
void FUN_00258970(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 unaff_EDI;
  undefined1 local_108 [4];
  char local_104 [260];
  
  FUN_002eaa19(local_104,0x104,s_lrg_free_________________________004062cc);
  pcVar3 = local_104;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  XAPILIB__WriteFile(unaff_EDI,local_104,(int)pcVar3 - (int)(local_104 + 1),local_108,0);
  for (iVar2 = *(int *)(param_1 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    FUN_002eaa19(local_104,0x104,s_fblock___u___d__0___1_004062b4,iVar2,
                 *(uint *)(iVar2 + 0x10) & 0x3ffffff);
    pcVar3 = local_104;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    XAPILIB__WriteFile(unaff_EDI,local_104,(int)pcVar3 - (int)(local_104 + 1),local_108,0);
  }
  return;
}
