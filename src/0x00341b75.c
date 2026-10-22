/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB83CDB3F13AA37EF448A171DB18D6961BC821FB298C93126A797F4B02763CAC
 * Entry: 0x00341b75, Ghidra index: 12679, label: FUN_00341b75
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s_CACHE_CONTROL_003b7620;
void FUN_00341b75(char *param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  char *local_8;
  
  pcVar4 = param_1;
  pcVar1 = param_1;
  do {
    do {
      for (; local_8 = pcVar1, *pcVar4 != '\n'; pcVar4 = pcVar4 + 1) {
        if (*pcVar4 == '\0') {
          return;
        }
        pcVar1 = local_8;
      }
      pcVar1 = pcVar4 + 1;
      *(char **)(param_2 + 0x58) = pcVar1;
      if ((param_1 + 1 < pcVar4) && (pcVar4[-1] == '\r')) {
        pcVar4[-1] = '\0';
        pcVar4 = local_8;
        do {
          cVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar3 != '\0');
        if (pcVar4 == local_8 + 1) {
          return;
        }
      }
      else {
        *pcVar4 = '\0';
      }
      if ((((*local_8 == ' ') || (*local_8 == '\t')) && (param_1 + 2 <= local_8)) &&
         ((local_8[-2] == '\0' && (local_8[-1] == '\n')))) {
        local_8[-2] = ' ';
        local_8[-1] = ' ';
      }
      puVar5 = (undefined1 *)FUN_002eb0b0(local_8,0x3a);
      pcVar4 = pcVar1;
    } while (puVar5 == (undefined1 *)0x0);
    *puVar5 = 0;
    FUN_00341b2d(&local_8);
    iVar7 = 0;
    do {
      iVar6 = __stricmp((&PTR_s_CACHE_CONTROL_003b7620)[iVar7],local_8);
      if (iVar6 == 0) {
        piVar2 = (int *)(param_2 + iVar7 * 4);
        if (*piVar2 == 0) {
          local_8 = puVar5 + 1;
          FUN_00341b2d(&local_8);
          *piVar2 = (int)local_8;
        }
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x16);
  } while( true );
}
